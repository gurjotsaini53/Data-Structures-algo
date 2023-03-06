#include <iostream>
using namespace std;


int main(){
    int a=10;
    int &r=a;
     
     r=25;
     // if we change r , a and b also going to change
     // reference does not consume any memory 
    
    cout<<r<<" "<<a<<endl;
    int b=5;
    r=b;
    cout<<r<<" "<<b<<endl;
    

    return 0 ;
}