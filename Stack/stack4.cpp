#include <iostream>
#include <stack>

using namespace std;



class Solution
{
    public:
    string removeConsecutiveDuplicates(string s)
    {
//write code
            string ans="" ; 
            int k=-1; 
            stack<char> mys; 
            stack<char> temp ;
            for (int i  = 0 ;  i < s.length() ; i++)
            {
                mys.push(s[i]);
            }
            while(!mys.empty())
            {
                if (temp.empty() || temp.top() != mys.top())
                {
                    temp.push(mys.top());
                    
                }
                mys.pop();
            }


            while(!temp.empty())
            {
                ans.push_back(temp.top());
                temp.pop();
            }
            return ans; 
     }
};



int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.removeConsecutiveDuplicates(s)<<endl;
    }
    
	return 0;
}
