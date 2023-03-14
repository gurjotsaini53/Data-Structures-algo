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

void deletitionAtBegin(Node **head)
{
if ((*head)==NULL)
{
    cout<<"Underflow"<<endl;
    return;
}
else{
    *head=(*head)->next;


}
}

void deletitionAtBegin2(Node *&head)
{
if (head==NULL)
{
    cout<<"Underflow"<<endl;
    return;
}
else{
    head=head->next;


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
    

    // using deletionAtBegin function
    printList(head);
    deletitionAtBegin(&head);
    printList(head);
    // using deletionAtBegin2 function
    printList(head);
    deletitionAtBegin2(head);
    printList(head);

    return 0;
}