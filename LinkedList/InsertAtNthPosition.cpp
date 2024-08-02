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



   //----Function for insertion at tail------
   void insertAtTail(Node* &tail, int data){
    Node* newNode=new Node(data);
    tail->next=newNode;
    tail=newNode;


   }

   //Insert at nth position
   void insertAtNthPosition(Node* &head, int position ,int data){
    Node* newNode=new Node(data);
    if(position==1){
        newNode->next=head;
        head=newNode;
        

    }
    else{
    Node * temp=head;
    int count=1;
    while(temp!=NULL && count<position-1){
        temp=temp->next;
        count++;
   }
    
    newNode->next=temp->next;
    temp->next=newNode;


    }
    


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
    //this is first node that is making without insertAtHead function
   
    Node* node1=new Node(10);
    Node* head=node1;
     Node* tail=node1;
   

     //--------Now add element by insertAtHead function------
    insertAtTail(tail,20);
     insertAtTail(tail,30);
    insertAtTail(tail,40);
     insertAtTail(tail,50);
     //--------Now insert any position-------
     insertAtNthPosition(head,1,25);
  
    print(head);

    return 0;
}
