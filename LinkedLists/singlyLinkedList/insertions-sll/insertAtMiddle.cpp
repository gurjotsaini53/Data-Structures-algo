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

void lastInsert(Node **head, int data)
{
    // creating a new node
    Node *newNode = new Node(data);
    if (*head == NULL)
    {
        *head=newNode;
    }
    else{
        Node *temp = *head; 

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

void beginInsert(Node **head, int data)
 {
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

void insertAtMiddle(Node **head , int data , int pos)
{
    // insert at middle means insert at a certain postion suggested by user

    // create a new node
    Node *newNode = new Node(data);

    // if head is NULL then newNode is head node
    if (*head == NULL)
    {
        *head = newNode;
    }
    else{

         int sizeLL= countNode(*head);
         if (pos>sizeLL+1)
         {
            cout<<"INVALID INSERTION"<<"\n";
            return; 
         }
         else if (pos==1)
         {
            beginInsert(head, data);
            return;
         }
         else if (pos==sizeLL+1)
         {
            lastInsert(head,data);
            return;
         }
        else{
           
           Node *ptr = *head  ;

           while(--pos > 1)
           {
            ptr=ptr->next;
           }
           newNode->next= ptr->next;
        ptr->next=newNode;

        }

      
    }

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
  // before insertion 
  printList(head);

  
  // after insertion
  insertAtMiddle(&head,100,5);
  printList(head);


}