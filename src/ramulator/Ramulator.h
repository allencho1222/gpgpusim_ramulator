#include "../gpgpu-sim/delayqueue.h"

#ifndef RAMULATOR_H_
#define RAMULATOR_H_

extern unsigned long long gpu_sim_cycle;
extern unsigned long long gpu_tot_sim_cycle;

class Request;
class MemoryBase;

class Ramulator {
public:
  Ramulator(unsigned partition_id, const struct memory_config* config,
            class memory_stats_t *stats, class memory_partition_unit *mp);
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
  MemoryBase* memory_model;

  fifo_pipeline<mem_fetch> *finishedq;
  fifo_pipeline<mem_fetch> *returnq;

  map<unsigned long long, deque<mem_fetch*>> reads;
  map<unsigned long long, deque<mem_fetch*>> writes;

  unsigned m_id;
  memory_partition_unit *m_memory_partition_unit;

  std::function<void(Request&)> read_cb_func;
  std::function<void(Request&)> write_cb_func;
  void readComplete(Request& req);
  void writeComplete(Request& req);
};

#endif
