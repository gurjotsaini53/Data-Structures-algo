#include <iostream>
using namespace std ;

class Node{

public:
int data;
Node* next;
Node(int value){
    this->data=value;
    this->next=NULL;
}
};

void printList(Node *head)
{
    Node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;

    }
    cout<<endl;
}

void deletitionAtEnd(Node *&head)
{
    // if list is empty
  if (head==NULL)
  {
    cout<<"list is empty"<<endl;
    return;
  }
    // if there is only one node in linked list
else if (head->next==NULL)
{
    delete head;
}

else{
    Node *ptr = head;
    Node *prev=NULL;

    while(ptr->next!=NULL)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next = NULL;
    
    delete ptr;


}
}


int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    // linking 
    head->next=second;
    second->next = third;
    third->next = NULL;
    

  
    // using deletionAtEnd function
    printList(head);
    deletitionAtEnd(head);
    printList(head);

    return 0;
}