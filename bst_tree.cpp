#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node* insert(Node* root, int target){
if(!root){
    Node* temp = new Node(target);
    return temp;
}
    if(target<root->data){
        root->left = insert(root->left, target);
    }
    else{
        root->right = insert(root->right, target);
    }
    return root;
}

    void inOrder(Node* root){
    if(!root){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main(){
    int arr[]={6,3,17,5,11,8,2,1,20,14};
    Node* root = NULL;
    for(int i=0;i<10;i++){
        root = insert(root,arr[i]);
    }
    cout<<"INORDER TRAVERSAL: ";
    inOrder(root);
    cout<<endl;
    return 0;
}