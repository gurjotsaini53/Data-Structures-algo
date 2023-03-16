#include <iostream>
using namespace std;

class Node{
public :
int data ;
Node *next;
// creating  a node contructor 
 Node(int value )
{
    this->data=value;
    this->next= NULL;
}
};


int countNode(Node *head)
{
   Node * temp = head; 
   int count = 0 ;

   while(temp!=NULL)
   {
      count++;
      temp=temp->next;
   }
   return count;

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
   // creating nodes
  Node *head=  new Node(10);
  Node *second = new Node(20);
  Node *third = new Node(30);
  

  // linking nodes to each other


  head->next = second ;
  second->next = third;

  // we can avoid below line of code as third is already NULL in the Node Contructor 
  third->next = NULL; 

  printList(head);

  cout<<countNode(head)<<endl;
}