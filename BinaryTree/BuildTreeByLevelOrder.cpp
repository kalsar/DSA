#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* left;
node* right;

node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;

}
};


//----Build by Level Order Traversal--------
void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter the data for root:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    
     while(!q.empty()){

        node* temp=q.front();
        q.pop();

          cout<<"Enter  left node  for "<<temp->data<<endl;
          int leftData;
          cin>>leftData;
          if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
          }

           cout<<"Enter  right node  for "<<temp->data<<endl;
          int rightData;
          cin>>rightData;
          if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
          }
     }
}
    
    

//-------------- Level order traversal------
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    
    while(!q.empty()){

        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left){
            
            q.push(temp->left);
        }

        if(temp->right){
                q.push(temp->right);
            }

    }

}





int main() {
    node* root= NULL;

    //creating tree
    buildFromLevelOrder(root);           //Data For Input:1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    //------level order traversal
    cout<<"Print the level order traversal:"<<endl;
    levelOrderTraversal(root);
    
    
return 0;

}


