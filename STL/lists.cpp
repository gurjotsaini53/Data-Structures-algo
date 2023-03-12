#include <iostream>
#include <list>
using namespace std ;


void explainLists(){
// lists in STL is a contiguous container that allows the inserting and erasing of elements in constant time and iteration in both direction

list <int> l1;
list<int> l2 ;

l1.push_back(2); // {2}
l1.push_front(3) ; // {3,2}

l1.emplace_front(6); // {6,3,2}
l1.emplace_back(7) ; // {6,3,2,7}


// iteration
for (auto x:l1)
{
    cout<<x<<" ";
}
cout<<"\n";
cout<<l1.size();
// begin , end , rbegin , rend , clear , insert , size , swap
// member functions are same as vector
}


int main(){
explainLists();
}