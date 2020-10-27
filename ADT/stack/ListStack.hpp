#include "StackADT.hpp"

struct node{
  int e;
  node *next;
};

class ListStack : public StackADT{
 private:
  node *_top;
  int _size;
 public:
  ListStack();
  ~ListStack();
  bool empty();
  int size();
  element_t top();
  void push(element_t);
  void pop();
};
