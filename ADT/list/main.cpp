#include <iostream>
#include <cstdio>
#include <ctime>
#include "ListADT.hpp"
#include "LinkedList.hpp"


int n;


int main(){

  srand(time(NULL));
  ListADT *ll = new LinkedList();
/*
  std::cout << "Cantidad de numeros a insertar: " << '\n';
  std::cin >> n;

  for(int i = 0; i<n; i++){
    int num = rand()%100;
    ll->add(num);
  }
  for(int i = 0; i<n; i++){
    std::cout << "ele: " <<ll->get(i)<< '\n';
  }
std::cout << "-------------"<< '\n';
  for(int i = 0; i<n; i++){
    std::cout << "head: " <<ll->get()<< '\n';
    std::cout << "size: " <<ll->size()<< '\n';
    std::cout << "-------------"<< '\n';
    ll->remove();
  }
*/

  return 0;
}
