#include <iostream>
using namespace std;


// creating Node and manually creating singly linked list and printing that linked list
class Node
{
  public:
  int data ;
  Node *next;
};


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
  

  Node *head=new Node();
  Node *second = new Node();
  Node *third = new Node() ;
   
  head->data = 10 ;
  second->data=20;
  third->data=30;

  head->next = second;
  second->next = third;
  third->next = NULL; 

  printList(head);
  return 0 ;
}