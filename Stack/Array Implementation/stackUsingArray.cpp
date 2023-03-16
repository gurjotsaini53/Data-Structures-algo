#include <iostream>
using namespace std ; 

#define N 100 ; 
class stack{
     int *arr   ; 
     int top ; 

     public : 
     stack(){
     
     int arr[n] ; 
         top  = -1  ;

     }

     void push(int val){
         if (top == (n - 1))
         {
             cout<<"overflow"<<endl;
             return ; 
         }

         top++;
         arr[top] = val ; 
     }

     void pop(){
         if (top==-1){
cout<<"underflow -> no element present in the stack"<<endl;
return  ; 
         }

         top-- ; 

     }

     int Top(){
         if (top==-1){
             cout<<"underflow -> no element present in the stack "<<endl ; 
             return -1  ; 
         }

         return arr[top] ; 
     }

     bool empty(){
         if(top==-1)
         return true; 
    
    else
    return false; }
};  
int main(){


stack s1 ; 
s1.push(10);
s1.push(20);
s1.push(30);
s1.push(40);

cout<<s1.Top()<<endl;
s1.pop();
s1.pop();
s1.pop();
s1.pop();
s1.pop();

cout<<s1.empty();

s1.push(40);
cout<<s1.empty();

}