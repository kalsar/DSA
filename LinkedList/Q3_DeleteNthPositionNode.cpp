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
    ~Node(){
        int value=this->data;
        if(this->next !=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};


  

   //----Function for insertion at tail------
   void insertAtTail(Node* &tail, int data){
    Node* newNode=new Node(data);
    tail->next=newNode;
    tail=newNode;


   }

   void deleteNthPosition(Node* &head,Node* &tail,int position){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

   }
   else{
    int count=1;
    Node* curr=head;
    Node* prev=NULL;
    while(count<=position && curr != NULL){
        prev=curr;
        curr=curr->next;
        count++;

    }
    if(curr->next==NULL){
        tail=prev;
    }

    
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;


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
    cout<<endl;
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

    print(head);

    deleteNthPosition(head,tail,1);
    cout<<"Print after deletion:"<<endl;
    print(head);
    cout<<"tail data:"<<tail->data;

    return 0;
}
