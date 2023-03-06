#include <iostream>
using namespace std ;
void printArray(int size,int A[])
{
    for (int i=0;i<size;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int A[5]={0};
     // printing array using for each loop

     for (int x:A)
     {
        cout<<x<<" ";
     }
     cout<<endl;

     cout<<sizeof(A)<<endl;
     cout<<sizeof(A)/sizeof(int)<<endl;

     // array initialisation

     int B[5]={0};  // elements equal to zero
     int C[5]={1,2,3} ;   // elements are 1,2,3,0,0
     int D[5]={1,2,3,4,5}  // elements are 1,2,3,4,5
     int E[]={1,2,2,3,3,45,34,54} 
}