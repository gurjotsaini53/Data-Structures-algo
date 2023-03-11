#include <iostream>
// header file for pair
#include <utility>
#include <string>

#include <bits/stdc++.h>
using namespace std;

// cpp stl is divided into 4 parts

// Algorithms
// container
// functions
// interators


void pairs()
{

    // defining a pair 
   pair<int , int > pair1 ;

   // assigning first part of pair
   pair1.first=10;
// assigning second part of pair
   pair1.second=20;
   cout<<pair1.first<< " "<< pair1.second<<endl;

   pair<int , char> pair2;
   pair2.first=10;
   pair2.second='A';
   cout<<pair2.first<< " "<< pair2.second<<endl;


   // pair 
   pair <int , char > pair3;
   cout<<pair3.first<<" "<<pair3.second<<endl;

   // int is initialised to 0 and char is initialised to NULL
   
   pair<string , double> pair4("Gurjot Singh",1.24343);
   cout<<pair4.first<<" "<<pair4.second<<endl;
   pair <int , int > pair5;
   cout<<pair5.first<<" "<<pair5.second<<endl;

   pair <int,char> g3(pair2);
   cout<<g3.first<<" "<<g3.second<<endl;
    
    // member functions
    // 1. make pair -- make pair allow to create a value pair wihout writing the types explicitly

    pair <int , int > g4;
    g4 =make_pair(10,20);
   cout<<g4.first<<" "<<g4.second<<endl;


   // 2. swap -- allow to swap content of one pair ot another pair
     pair<char, int> p1 = make_pair('A', 1);
    pair<char, int> p2 = make_pair('B', 2);

    cout<<"before swaping"<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    
    p1.swap(p2);

      cout<<"afterswaping"<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;

    // 3. tie -- it creates a tuple of lvalue reference to its arguments i.e. to unpack
    // the tuple (or pair) values into separates variables

    // syntax
    // tie(int & ,int &) = pair ;
      
      int a, b ;
      tie(a,b)=pair1;
      cout<<a<<" "<<b<<endl;

      // more important topics 
     // defining +c initilisation
      pair <int,int > p ={1,3};
      cout<<p.first<<' '<<p.second<<endl;
    
    pair <int , pair<int , int > >p5 = {1,{2,3}};
    cout<<p5.first<<" "<<p5.second.first<<" "<<p5.second.second<<endl;

    // storing pairs in array 

    pair <int , int > arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[0].first<<endl;
    cout<<arr[0].second<<endl;
    cout<<arr[1].first<<endl;
    cout<<arr[1].second<<endl;
    cout<<arr[2].first<<endl;
    cout<<arr[3].second<<endl;

}
int main(){
     
     pairs();

    return 0; 
}