#include <cstdio>
#include <cstdlib>
#include "ArrayQueue.hpp"
#define MAX 100
ArrayQueue::ArrayQueue(){
  _container=new int[MAX];
  _front=-1;
  _back=-1;
  _size=0;
}
ArrayQueue::~ArrayQueue(){
  delete [] _container;
}
bool ArrayQueue::empty(){
  // Insert your code here
  //change the return according to your implementation
  return true;
}
int ArrayQueue::size(){
  // Insert your code here
  //change the return according to your implementation
  return 0;
}
element_t ArrayQueue::front(){
  // Insert your code here
  //change the return according to your implementation
  return 0;
}
element_t ArrayQueue::back(){
  // Insert your code here
  //change the return according to your implementation
  return 0;
}
void ArrayQueue::enqueue(element_t e){
  // Insert your code here
}
void ArrayQueue::dequeue(){
  // Insert your code here
}
