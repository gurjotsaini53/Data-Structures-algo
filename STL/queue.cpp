#include <iostream>
#include <queue>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void printQueue(queue<int> q)
{
    while(!q.empty())
    {
cout<<q.front()<<" ";
q.pop();
    }
}
void explainqueue()
{
    // a queue is a linear list of elements in which deletions 
 // can take place only at one called the front and insertions can 
 // take place only at the end called the rear. The queue is a first
 // In first out (fifo) 


 queue<int> q;
 queue<string> q1;

 q.push(110); // {110}
 q.push(220); //{110,220}
 q.push(330); //{110,220,330}
 q.push(440); //{110,220,330,440}
q.emplace(550); //{110,220,330,440,550}

 cout<<q.front()<<endl;
 cout<<q.back()<<endl;
 cout<<q.size()<<endl;
 cout<<q.empty()<<endl;
 printQueue(q);
 
}


int main()
{
explainqueue();
}