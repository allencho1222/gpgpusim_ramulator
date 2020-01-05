#ifndef RAMULATOR_H_
#define RAMULATOR_H_

#include <string>
#include <deque>
#include <map>
#include <functional>

#include "Config.h"

#include "../gpgpu-sim/delayqueue.h"
#include "../gpgpu-sim/mem_fetch.h"

extern unsigned long long gpu_sim_cycle;
extern unsigned long long gpu_tot_sim_cycle;

class Request;
class MemoryBase;

class Ramulator {
public:
  Ramulator(unsigned partition_id, const struct memory_config* config,
            class memory_stats_t *stats, class memory_partition_unit *mp,
            std::string ramulator_config, unsigned ramulator_cache_line_size);
  ~Ramulator();

  // check whether the read or write queue is available
  bool full(bool is_write, long req_addr);
  void cycle();

  void finish(void);

  // push mem_fetcth object into Ramulator wrapper
  void push(class mem_fetch* mf);

  mem_fetch* return_queue_top() const;
  mem_fetch* return_queue_pop() const;
  mem_fetch* returnq_full() const; 

  // related memory partition

private:
  MemoryBase* memory;

  fifo_pipeline<mem_fetch> *finishedq;
  fifo_pipeline<mem_fetch> *returnq;

  std::map<unsigned long long, std::deque<mem_fetch*>> reads;
  std::map<unsigned long long, std::deque<mem_fetch*>> writes;

  unsigned m_id;
  memory_partition_unit *m_memory_partition_unit;

  // callback functions
  std::function<void(Request&)> read_cb_func;
  std::function<void(Request&)> write_cb_func;
  void readComplete(Request& req);
  void writeComplete(Request& req);

  // Config - 
  // it parses options from ramulator_config file when it is constructed
  ramulator::Config ramulator_configs;



};

#endif
