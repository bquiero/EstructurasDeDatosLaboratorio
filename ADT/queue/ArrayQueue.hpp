#include "QueueADT.hpp"

class ArrayQueue : public QueueADT{
 private:
  int _front;
  int _back;
  int _size;
  element_t *_container;
 public:
  ArrayQueue();
  ~ArrayQueue();
  bool empty();
  int size();
  element_t front();
  element_t back();
  void enqueue(element_t);
  void dequeue();
};
