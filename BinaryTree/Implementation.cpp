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

node* buildTree(node* root){
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data ==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
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
    root=buildTree(root);           //Data For Input:1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //level order traversal
    cout<<"Print the level order traversal:"<<endl;
    levelOrderTraversal(root);

    return 0;

}



