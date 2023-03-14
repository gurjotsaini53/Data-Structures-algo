#include <iostream>
using namespace std;
// stack is a linear data structure in which the insetion of a new 
// element and removal of an existing element takes place at same end
// represented as the top of stack

// LIFO -- last in first out

// basic operation on stack
//1. push()
//2. pop()
//3. top()
//4. isEmpty()
//5. size()


#define stackSize 1000;

class Stack{
   
   private:
   int SIZE;

   public:
   int arr[stackSize];  // array of max size of stack

   stack(){
    SIZE=-1;
   }

   bool push(int x){
   if (SIZE>=stackSize-1)
   {
    cout<<"stack overflow";
    return false;
   }
   else{
    a[++SIZE]=x;
    cout<<x<<" pushed into stack\n";
   }
}

   int pop(){
    if (SIZE<0)
    {
        cout<<"stack underflow\n";
        return 0;
    }
    else{
        int x=a[SIZE];
        SIZE--;
        return x;
    }
}
   int top(){
    if (SIZE<0)
    {
        cout<<"stack is Empty\n";
        return 0;
    }
    else{
        int x=a[size];
        return x;
    }
}
   bool isEmpty(){
    if (SIZE<0)
    {
        return true;
    }
    else{
        return false;
    }
}
   int size(){
    return SIZE;
}

};


int main(){
   class Stack s;
   s.isEmpty();// return 0
   s.push(10);  // {10}
   s.push(20);  // {10,20}
   s.push(30);   // {10,20,20}
   cout<<s.pop();   // {10,20}
   cout<<s.size(); // return 2
    cout<<s.top(); // 20;
}