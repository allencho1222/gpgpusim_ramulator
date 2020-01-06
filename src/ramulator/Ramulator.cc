#include "Ramulator.h"

#include "MemoryFactory.h"
#include "Memory.h"
//#include "MemoryFactory.h"
//#include "Memory.h"

//#include "Config.h"
//#include "Request.h"

//#include "MemoryFactory.h"
//#include "Memory.h"

#include "DDR3.h"
#include "DDR4.h"
#include "LPDDR3.h"
#include "LPDDR4.h"
#include "GDDR5.h"
#include "WideIO.h"
#include "WideIO2.h"
#include "HBM.h"
#include "SALP.h"

#include "../gpgpu-sim/l2cache.h"

using namespace ramulator;

static map<string, function<MemoryBase *(const Config&, int)>> name_to_func = {
    {"DDR3", &MemoryFactory<DDR3>::create}, 
    {"DDR4", &MemoryFactory<DDR4>::create},
    {"LPDDR3", &MemoryFactory<LPDDR3>::create}, 
    {"LPDDR4", &MemoryFactory<LPDDR4>::create},
    {"GDDR5", &MemoryFactory<GDDR5>::create}, 
    {"WideIO", &MemoryFactory<WideIO>::create}, 
    {"WideIO2", &MemoryFactory<WideIO2>::create}, {"HBM", &MemoryFactory<HBM>::create},
    {"SALP-1", &MemoryFactory<SALP>::create}, 
    {"SALP-2", &MemoryFactory<SALP>::create}, 
    {"SALP-MASA", &MemoryFactory<SALP>::create}
};


Ramulator::Ramulator(unsigned partition_id, 
                     const struct memory_config* config,
                     class memory_stats_t *stats, 
                     class memory_partition_unit *mp,
                     std::string ramulator_config, // config file path
                     unsigned num_cores,
                     unsigned ramulator_cache_line_size) 
  : ramulator_configs(ramulator_config),
    read_cb_func(std::bind(&Ramulator::readComplete, this, std::placeholders::_1)),
    write_cb_func(std::bind(&Ramulator::writeComplete, this, std::placeholders::_1)),
    m_id(partition_id), num_cores(num_cores), m_memory_partition_unit(mp) {
  // ramulator init
  const string& std_name = ramulator_configs["standard"];
  assert(name_to_func.find(std_name) != name_to_func.end() &&
         "unrecognized standard name");
  memory = name_to_func[std_name](ramulator_configs, ramulator_cache_line_size);
  tCK = memory->clk_ns();

  m_id = partition_id;
  m_memory_partition_unit = mp;

  // init fifo pipelines
  returnq = 
    new fifo_pipeline<mem_fetch>("ramulatorreturnq", 0, 
                                 config->gpgpu_dram_return_queue_size == 0 ?
                                 1024 : config->gpgpu_dram_return_queue_size);
  finishedq =
    new fifo_pipeline<mem_fetch>("finishedq", config->CL, config->CL + 1);
}

bool Ramulator::full(bool is_write, long req_addr) {
  return memory->full(is_write, req_addr);
}

void Ramulator::cycle() {
  if (!returnq_full()) {
    mem_fetch* finished_mf = finishedq->pop();
    if (finished_mf) {
      finished_mf->set_status(IN_PARTITION_MC_RETURNQ, gpu_sim_cycle + gpu_tot_sim_cycle);
      if (finished_mf->get_access_type() != L1_WRBK_ACC && finished_mf->get_access_type() != L2_WRBK_ACC) {
        finished_mf->set_reply();
        returnq->push(finished_mf);
      } else {
        m_memory_partition_unit->set_done(finished_mf);
        delete finished_mf;
      }
    }
  }
  
  // cycle ramulator
  memory->tick();
}


bool Ramulator::send(Request req) {
  return memory->send(req);
}

void Ramulator::push(class mem_fetch* mf) {
  bool accepted = false;

  if (mf->get_type() == READ_REQUEST) {
    assert (mf->is_write() == false);
    assert (mf->get_sid() < (unsigned) num_cores);

    Request req(mf->get_addr(), Request::Type::R_READ, 
                read_cb_func, mf->get_sid());
    req.mf = mf;
    accepted = send(req);
  } else if (mf->get_type() == WRITE_REQUEST) {
    // WRITE_BACK
    if (mf->get_sid() > (unsigned) num_cores) {
      Request req(mf->get_addr(), Request::Type::R_WRITE,
                  write_cb_func, num_cores);
      req.mf = mf;
      accepted = send(req);
    } else {
      Request req(mf->get_addr(), Request::Type::R_WRITE,
                  write_cb_func, mf->get_sid());
      req.mf = mf;
      accepted = send(req);
    }
  }

  // Since push occurs only if the dram is not full (checked in dram_cycle()),
  // accepted has to true
  // full() function determines whether the enqueue() in the controller can be done or not
  assert(accepted);

  // for callback function to process completed request
  if (mf->is_write())
    writes[mf->get_addr()].push_back(mf);
  else
    reads[mf->get_addr()].push_back(mf);
}

bool Ramulator::returnq_full() const {
  returnq->full();
}
mem_fetch* Ramulator::return_queue_top() const {
  return returnq->top();
}
mem_fetch* Ramulator::return_queue_pop() const {
  return returnq->pop();
}

void Ramulator::readComplete(Request& req) {
  auto& read_mf_list = reads.find(req.mf->get_addr())->second;
  mem_fetch* mf = read_mf_list.front();
  read_mf_list.pop_front();

  if (!read_mf_list.size())
    reads.erase(req.mf->get_addr());

  finishedq->push(mf);
}
void Ramulator::writeComplete(Request& req) {
  auto& write_mf_list = writes.find(req.mf->get_addr())->second;
  mem_fetch* mf = write_mf_list.front();
  write_mf_list.pop_front();

  if (!write_mf_list.size())
    writes.erase(req.mf->get_addr());

  finishedq->push(mf);
}

void Ramulator::finish(void) {
  Stats_ramulator::statlist.printall();
  memory->finish();
}
