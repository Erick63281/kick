#include <iostream>
#include "kickshort.h"
using namespace std;
int main(){
  int tam  , a[50];
  cout<<"Ingrese el tamaño del arreglo: ";
  cin>>tam;
  for(int i = 0 ; i < tam ; i++){
  cout<<"Ingrese el numero "<<i+1<<" :";
  cin>>a[i];
  }
  ordenar(a,0,tam);
  cout<<"El arreglo ordenado es: ";
  for(int i = 1 ; i <= tam ; i++){
  cout<<"["<<a[i]<<"]";
  }
  return 0 ; 
}
