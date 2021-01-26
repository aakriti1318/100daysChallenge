#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data; 
    struct Node* left;
    struct Node* right;
};

Node* newNode(int val){
    Node* node = (Node*) malloc(sizeof(Node));
    node->data=val;
    node->left=node->right=NULL;
    return node;
}

Node* buildtree(int arr[], Node* root, int i, int n){
    if(i<n){
        Node* temp = newNode(arr[i]);
        root = temp;
        root->left = buildtree(arr, root->left, 2*i+1, n);
        root->right = buildtree(arr, root->right, 2*i+2, n);
    }
    return root;
}

void postorder(Node* node){
    if(node!=NULL){
        // L R root
        postorder(node->left);
        postorder(node->right);
        cout<< node->data;
    }
}

void preorder(Node* node){
    if(node!=NULL){
        // Root L R
        cout<< node->data;
        preorder(node->left);
        preorder(node->right);
    }
}

void inorder(Node* node){
    if(node!=NULL){
        // L root R
        inorder(node->left);
        cout<< node->data;
        inorder(node->right);
    }
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    Node* root = buildtree(arr, root, 0, n); 
    cout<<"Inorder :" ;
    inorder(root);
    cout<<endl<<"Preorder : ";
    preorder(root);
    cout<<endl<<"Postorder : ";
    postorder(root);
    return 0;
}