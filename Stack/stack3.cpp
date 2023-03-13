#include <iostream>
#include <stack>
using namespace std ;


class Solution{
  public:
    void reverseArray(int n, int* arr){
//write code
        
         stack<int> s ; 
         for(int i  = 0 ; i < n ; i++)
         {
            s.push(arr[i]);
         }
         int k = 0 ; 
         while(!s.empty())
         {
            int num  = s.top() ; 
             arr[k++]=num;
             s.pop();
         }

     
    }
};


int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    Solution obj;
    obj.reverseArray(n, arr);
    
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    }
    return 0;
}

