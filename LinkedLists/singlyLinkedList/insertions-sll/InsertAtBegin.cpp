#include <iostream>
using namespace std;

class Node
{
  public:
  int data ;
  Node *next;

  // making a Node constructor
   Node(int value)
   {
    this->data = value;
    this->next = NULL;
   }
};

void beginInsert(Node **head, int data) {


// creating a new node
Node *newNode = new Node(data);
if (*head==NULL)
{
    *head=newNode;
}
else
{
    newNode->next = *head;
    *head = newNode;
}
}
void printList(Node *head){
   // printing singly linked list
     Node *ptr = head;
 
     while(ptr!=NULL)
     {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
     }
     cout<<"\n";
}

int main(){
     Node *head=new Node(10);
  Node *second = new Node(20);
  Node *third = new Node(30) ;

  head->next = second;
  second->next = third;
  third->next = NULL; 

  printList(head);

  // after insertion
  beginInsert(&head,100);
  printList(head);
  


  return 0 ;
}