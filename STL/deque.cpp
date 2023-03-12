#include <iostream>
#include <deque>
using namespace std ;
void explainDeque(){
 // same as lists and vector its member function


 // deque means DOUBLE ENDER QUEUE which is also called Deque is a type of
 // queue data structure in which the insertion and deletion of elements can be
 // either in front or rear


deque<int> d1;

d1.push_front(1); // {1}
d1.push_back(2); // {1,2}
d1.emplace_front(0) ; //{0,1,2}
d1.emplace_back(3) ; // {0,1,2,3}

d1.pop_front(); // {1,2,3}
d1.pop_back(); // {1,2}
cout<<d1.front()<<endl;
cout<<d1.back()<<endl;
cout<<d1.size()<<endl;


for(auto x:d1)
{
    cout<<x<<" ";
}

// reset functions are same as vector
// begin, end, rbegin,rend , clear, insert, size, swap


}


int main()
{

explainDeque();

}