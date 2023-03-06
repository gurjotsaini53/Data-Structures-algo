#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){

    int a[5]={2,3,4,5,6};
    int *p;
    p=a;  //or p=&A[0] , dont use &a
    // accessing array elements using pointers
    for (int i=0;i<5;i++)
    {
      cout<<p[i]<<" ";
    }

      cout<<endl;

    // dynamicaly creating array;


    int *q=(int *)malloc(5*sizeof(int));
    q[0]=10;
    q[1]=20;
    q[2]=30;
    q[3]=40;
    q[4]=50;
  
    for (int i =0 ;i<5;i++)
    {
        cout<<q[i]<<" ";
    }
      cout<<endl;

    

    int *w=new int[5];
    w[0]=100;
    w[1]=200;
    w[2]=300;
    w[3]=400;
    w[4]=500;

for (int i =0 ;i<5;i++)
    {
        cout<<w[i]<<" ";
    }
   


   delete [] w ;// used in c++
    free (q); // used in c

}