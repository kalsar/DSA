#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};

//----Function for insertion at head------

  void insertAtHead(Node* &head,int data){
    //Yhan Aane se pahle Linked List ka ek node ban chuka hai at object creation time.
    
    Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;
   }

   //----Function for insertion at tail------
   void insertAtTail(Node* &tail, int data){
    Node* newNode=new Node(data);
    tail->next=newNode;
    tail=newNode;


   }

   //Printing function
   void print(Node* &head){
    Node* temp=head;
    cout<<"Linked list:"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
   }
int main(){
    //This is first node which created by object  without insertAtHead function
   
    Node* node1=new Node(10);
    Node* head=node1;
     Node* tail=node1;
  
    //----Now add element by insertAtHead function--------
   
    // insertAtHead(head,20);
    // insertAtHead(head,30);
    // insertAtHead(head,40);

     //--------Now add element by insertAtHead function------
    insertAtTail(tail,30);
     insertAtTail(tail,20);
    insertAtTail(tail,40);
  
    print(head);

    return 0;
}
