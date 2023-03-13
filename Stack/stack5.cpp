#include <bits/stdc++.h>
using namespace std;


vector<int> remove_special_consecutive(vector<int>v,int x,int y)
{
//write code 

 vector <int>  ans ; 
 stack<int> mys; 
            stack<int> temp ;
            for (int i  = 0 ;  i < v.size() ; i++)
            {
                mys.push(v[i]);
            }
            while(!mys.empty())
            {
                if (temp.empty() ||temp.top() != mys.top() )
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


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x); //Input vector elements
	    }
	    
	    int x,y;
	    cin>>x>>y;
	    
	    vector<int>result= remove_special_consecutive(v,x,y);
	    for(auto i:result)
	    {
	        cout<<i<<" ";
	    }
	    cout<<endl;
	   
	}
	return 0;
}

