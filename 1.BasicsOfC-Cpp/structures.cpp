#include <iostream>
using namespace std;

struct Rectangle{
int length; // 4 bytes
int breadth; // 4 bytes

}R2;

struct Rectangle R3,R4;
int main(){
  struct Rectangle R1={10,50}; // declaration + initialization
  cout<<sizeof(R1)<<endl;
  cout<<sizeof(R2)<<endl;
  cout<<R1.length<< " "<< R1.breadth<<endl;
   
   R1.length=15;
   R1.breadth=20;
   cout<<" Area of Reactange R1 = "<<R1.length*R1.breadth<<endl;

}