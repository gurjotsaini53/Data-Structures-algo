#include <iostream>
#include <vector>
using namespace std;
void explainvector()
{

    // vector are dynamically arrays that have the ability to change size 
    // whenever elements are added or deleted from them, vector element can be easily 
    // accessed and travesed using iterators. A vector stores elements in contiguous memory 
    // locations.



    // declare a vector
  vector <int> v ; 
  cout<<v.capacity()<<endl;
  cout<<v.size()<<endl;
 v.push_back(1);
 v.emplace_back(2);

 // declaring a vector pair
 vector <pair<int , int > > v1;

 v1.push_back({1,2});  // have to use curly braces to push a pair
 v1.emplace_back(3,4); // emplace back dynamically assumes first 2 numbers as a pair

 // declaring a vector with size 5 
 vector <int> v2(5);
 //declaring a vector of size 5 with all elements 100
 vector <int> v3(5,100);

vector<int> v4(5,20);
// creating new vector with values from other vector
vector<int>v5(v4);


// iterators

// iterators is nothing but points to the memory where element is lying
vector<int> v6={1,2,3,4,5};
vector<int>::iterator i = v6.begin();
i++;
cout<<*(i)<<endl;

i=i+2;
cout<<*(i)<<endl;


// other iterators
vector<int>::iterator i2=v6.end(); // end points to memory location right after the last element
i2--;
cout<<*(i2)<<endl; 

//vector<int>::iterator i3=v6.rbegin();
//vector<int>::iterator i4=v6.rend();
//cout<<*(i3)<<endl;
//cout<<*(i4)<<endl;

cout<<v6[0]<< " "<< v6.at(0)<<endl;


// printing vector using iterator
// we can also print a vector as we print a array 
for(vector<int>::iterator p=v6.begin();p!=v6.end();p++)
{
    cout<<*(p)<<" ";
}
cout<<endl;
for (auto q=v6.begin(); q!= v6.end();q++)
{
    cout<<*(q)<<" ";
}
cout<<endl;
for (auto w:v6)
{
    cout<<w<<" ";
}
cout<<endl;


//m removing elements from vector
// {1,2,3,4,5}
v6.erase(v6.begin());
// {2,3,4,5}

v6.erase(v6.begin()+2);
// {2,3,5}

// range erasing , end is excluded {start, end}
v6.erase(v6.begin()+1, v6.end());


// insert function

vector<int> vector1(4,100); // {100,100,100,100}
vector1.insert(vector1.begin(),300);  // {300,100,100,100,100}
vector1.insert(vector1.begin()+2,3);  // {300,100,3,100,100,100}


vector<int> copy(2,50); // {50,50}
vector1.insert(vector1.begin(),copy.begin(),copy.end()); 
// {50,50,300,100,3,100,100,100}

cout<<vector1.size()<<endl;
cout<<vector1.capacity()<<endl;
// if push it suddenly increase its capacity to double of size
vector1.push_back(20);
cout<<vector1.capacity()<<endl;

// {1,2}
cout<<v.size()<<endl;
v.pop_back(); // {10}


// swaping vectors
vector<int> p1={1,2}; // {1,2}
vector<int> p2={3,4}; // {3,4}
cout<<" front element = "<<p1.front()<<endl;
cout<<" back element = "<<p1.back()<<endl;
p1.swap(p2);

// p1 -> {3,4}
// p2 -> {1,2}

cout<<"Is vector empty (0 = no or 1 = yes) = "<<p1.empty()<<endl;

p1.clear() ; // erases the entire vector
cout<<p1.empty()<<endl;
cout<<p1.size()<<endl; // size 0 when all elements are removed through clear
cout<<p1.capacity()<<endl; // but capacity remains same
}

int  main(){
  explainvector();
}