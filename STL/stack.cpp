#include <iostream>
#include <stack>
using namespace std;
void explainStack()
{
// insertion and deletion only at end is done in stack
    // LIFO
 // Last in first out
stack<int> st;
st.push(1); // {1}
st.push(2); // {1,2}
st.push(0); // {1,2,0}
st.push(3); // {1,2,,0,3}
st.push(5); // {1,2,0,3,5}

cout<<st.top()<<endl; // prints 5 and only top elements can access
st.pop(); // {1,2,3}

cout<<st.top()<<endl;
cout<<st.size()<<endl;
cout<<st.empty()<<endl;

stack<int> s1,s2;
s1.swap(s2);

// st.emplace(5);
 

}


int main()
{
explainStack();
}