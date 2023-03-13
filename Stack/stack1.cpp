#include <iostream>
#include <stack>
using namespace std ;

stack<int> mypush(int arr[], int n )
{
  // write down code
   stack<int> s ; 
   for (int i = 0 ;i < n;i++)
   {
    s.push(arr[i]);
   }
   return s;
}

void mypop(stack<int> s)
{
   // write down code
   if(s.empty()){
    cout<<"UNDERFLOW"<<"\n";

   }
   else{

    while(!s.empty()){
       int num = s.top() ; 
       cout<<num<<" ";
       s.pop();
    }
   }

}

int main(){
    int t ; 
    cin >> t ;
    while(t--)
    {
        int n ; 
        cin >> n ; 
        int arr[n];
        for (int i =  0 ; i < n ; i++)
        cin >>  arr[i] ; 

        stack<int> mys = mypush(arr,n);
        mypop(mys);
        cout<<endl;
    }
}