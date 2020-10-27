#include <cstdlib>
#include "ArrayStack.hpp"
#define MAX 10

ArrayStack::ArrayStack(){
  _container=new int[MAX];
  _last=-1;
}
ArrayStack::~ArrayStack(){
  delete [] _container;
}
bool ArrayStack::empty(){
  // Insert your code here
  //change the return according to your implementation
    return false;

}
int ArrayStack::size(){
  // Insert your code here
  //change the return according to your implementation
  return 0;
}
element_t ArrayStack::top(){
    // Insert your code here
    //change the return according to your implementation
  return 0;
}
void ArrayStack::push(element_t e){
  // Insert your code her
}
void ArrayStack::pop(){
  // Insert your code here
}
