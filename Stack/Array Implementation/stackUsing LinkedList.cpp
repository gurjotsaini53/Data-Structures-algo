#include<iostream>
using namespace std;

class Node {
    public :
    int data;
    Node *next;
    Node(int data) {
        this -> data = data;
        next = NULL;
    }
};
class Stack {
    Node *head;
    int size;       // number of elements prsent in stack
    public :
    Stack() {
        head=NULL;
        size=0;
    }
    
    int getSize() {
        return size;
    }
    bool isEmpty() {
        if(size==0)
          return true;
      else return false;
    }
    void push(int element) {
      Node *newnode=new Node(element);
   if(head==NULL)
     head=newnode;
      else{
        newnode->next=head;
        head=newnode;
      }
      
        size++;
    }
    
    int pop() {
        // Return 0 if stack is empty. Don't display any other message
      if(head==NULL)
        return 0;
      int ans=head->data;
      Node *a=head;
      head=head->next;
      delete a;
        size--;
      return ans;
    }
    
    int top() {
        // Return 0 if stack is empty. Don't display any other message
       if(head == NULL)
        return 0;
      return head->data;
    }
};

    int main() {
        Stack st;
        // int input;
        // cin>>input;
		// st.push(input);
        // int ans = st.top();
        // if(ans != 0) 
        //     cout << ans << endl;
        // else                   
		// 	cout << "-1" << endl;
        
		// cin>>input;
		// st.push(input);
        // cin>>input;
		// st.push(input);
        // cin>>input;
		// st.push(input);
        
        // ans = st.top();
        // if(ans != 0) 
        //     cout << ans << endl;
        // else                   
		// 	cout << "-1" << endl;
        
		// ans = st.pop();
        // if(ans != 0) 
        //     cout << ans << endl;
        
        // else 
        //     cout << "-1" << endl;
        
        // cout << st.getSize() << endl;
        // if(st.isEmpty())
        //             cout << "true" << endl;
        // else
        //     cout << "false" << endl;
        

        st.push(10);
        st.push(20);
        st.push(30);

        cout<<st.pop(); 
}
