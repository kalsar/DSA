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

//----------Inorder traversal-------------------
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


//----------pre order traversal--------------------
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
//--------------post order traversal----------------
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main() {
    node* root= NULL;

    //creating tree
    root=buildTree(root);           //Data For Input:1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //------level order traversal
    cout<<"Print the level order traversal:"<<endl;
    levelOrderTraversal(root);
    
    //------Inorder traversal----

     cout<<"Print the inorder order traversal:"<<endl;
    inorder(root);
     //------Preorder traversal----
     cout<<"Print the pre order traversal:"<<endl;
    preorder(root);

     //------Postorder traversal----
    cout<<"Print the post order traversal:"<<endl;
    postorder(root);


    return 0;

}



