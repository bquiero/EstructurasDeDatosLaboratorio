#ifndef LISTADT_H
#define LISTADT_H
typedef int element_t;
typedef int index_t;

class ListADT {
 public:
  virtual bool empty() = 0;
  virtual index_t size() = 0;
  virtual element_t get() = 0;
  virtual element_t get(index_t) = 0;
  virtual bool contains(element_t) = 0;
  virtual void add(element_t) = 0;
  virtual void add(element_t,index_t) = 0;
  virtual void remove() = 0;
  virtual void remove(element_t) = 0;
};
#endif
