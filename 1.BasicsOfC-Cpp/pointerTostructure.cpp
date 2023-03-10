#include <iostream>
using namespace std;


struct Rectangle{
    int length;
    int breadth;
};

int main(){

struct Rectangle r={10,5};
struct Rectangle *p = &r;

(*p).length=20;
(*p).breadth=15;

cout<<(*p).length<<endl;
cout<<(*p).breadth<<endl;

// dynamically allocation 
struct Rectangle *q;
q=(struct Rectangle*)malloc(sizeof(struct Rectangle));
(*q).length=10;
(*q).breadth=5;

cout<<(*q).length<<endl;
cout<<(*q).breadth<<endl;
cout<<q->length<<endl;
cout<<q->breadth<<endl;

}