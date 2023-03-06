#include <iostream>
using namespace std;

struct complex{
int real;
int img ;
};
int main(){
 struct complex C1;
 C1.real=10;
 C1.img=20;
 cout<<C1.real<<"+ i"<<C1.img<<endl;
}