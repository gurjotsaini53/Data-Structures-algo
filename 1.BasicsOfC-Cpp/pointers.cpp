#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
    int a=10;
    int *p;
    p=&a;
    cout<<*p<<endl;
    cout<<p<<endl;

    // dynamic memory allocation
    int *q;
    // dynamic memory allocation occur in heap
    // so if we have to access allocation occur in heap 
    // we have to use pointer

    q= (int *) malloc(5*sizeof(int));

    // in C++ Dynamic memory allocation'

    int *w= new int[5];
   

   int *p1;
   char *p2;
   double *p3;
   cout<<sizeof(p1)<<endl;
   cout<<sizeof(p2)<<endl;
   cout<<sizeof(p3)<<endl;
   // size of pointer is independent of size of its datatype to which it is pointing
}