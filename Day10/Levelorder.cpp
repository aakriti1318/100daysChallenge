#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

Node* newNode(int val){
    Node *node = (Node*) malloc(sizeof(Node));
    node->data = val;
    node->left = node->right = NULL;
    return node;
}

Node* buildtree(int arr[], Node* node, int i, int n){
    if(i<n){
        Node* temp = newNode(arr[i]);
        node = temp;

        node->left = buildtree(arr,node->left,2*i+1, n);
        node->right = buildtree(arr,node->right,2*i+2,n);
    }
    return node;
}
void Levelorder(Node* node){
    if(node == NULL) return;
    queue<Node *> q;
    q.push(node);
    while(q.empty() == false){
        Node* root = q.front();
        cout<<root->data;
        q.pop();
        if(root->left!=NULL) q.push(root->left);
        if(root->right!=NULL) q.push(root->right); 
    }
}
int main(){
    int n; cin>>n; 
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    Node* root = buildtree(arr, root, 0, n); 
    cout<<"Level Order : ";
    Levelorder(root);
    return 0;
}