#include<iostream>
using namespace std;

class node 
{
    public:
    int data;
    node *left, *right;
    
    node(int d)
    {
        data =d; 
        left=NULL;
        right =NULL;
    }
};

node* buildtree()  //it returns address	 of root node
{
    int d;
    cin>>d;
    
    if(d==-1)       //if the node does not have child on any of side or both the sides 
    //then it will assign -1 as a address to the node *left , *right   eg: -1 data -1
        return NULL; 
        
    node *root =new node(d);
    root->left=buildtree();
    root->right=buildtree();
    
    return root;
    
}

void print (node* root)
{
    if(root==NULL)
        return;
    
    //otherwise print root followed by subtrees(children)
    cout<<root->data<<" ";
    print(root->left);
    print (root->right);
}
int main()
{
    node *root =buildtree();
    print (root);
}
