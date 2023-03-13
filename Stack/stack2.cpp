#include <iostream>
#include <stack>
using namespace std ;


void insert(stack<int> &s,int x){
    s.push(x);
}

void remove(stack<int> &s){
    s.pop();
}

//Function to print the top element of stack.
void headOf_Stack(stack<int> &s){
//write code
if (s.empty())
{
    cout<<"Empty stack";
}
else{

  int head  = s.top();
  cout<<head<<"\n";
}
}

bool find(stack<int> s, int val){
//write code
  if(s.empty())
  {
    cout<<"stack is empty"<<endl;

  }
  else{
       while(!s.empty())
       {
          if (s.top()==val)
          {
            return true;
          }
          else{
            s.pop();
          }

       }
  }
    return false;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    stack<int> s;
	    int q;
	    cin>>q;
	    while(q--){
	        char ch;
	        cin>>ch;
	        
	        if(ch=='i')
	        {
	            int x;
	            cin>>x;
	            
	            insert(s,x);
	            
	        }
	        else if(ch=='r')
	        {
	            remove(s);
	        }
	        else if(ch=='h')
	        {
	            headOf_Stack(s);
	        }
	        else if(ch=='f')
	        {
	            int x;
	            cin>>x;
	            if(find(s,x))
	            cout << "Yes";
	            else cout << "No";
	            cout << endl;
	        }
	        
	    }
	}
	return 0;
}
