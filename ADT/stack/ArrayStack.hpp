#include "StackADT.hpp"

class ArrayStack : public StackADT{
 private:
  int _last;
  int *_container;
 public:
  ArrayStack();
  ~ArrayStack();
  bool empty();
  int size();
  element_t top();
  void push(element_t);
  void pop();
};
