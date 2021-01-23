#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *left, *right;
    
    node (int d)
    {
        data=d;
        left=right=NULL;
    }
};

int height(node *root)
{
    if(root==NULL)
        return 0;
        
    int l=height(root->left);
    int r=height(root->right);
    
    return max(l,r)+1;
}

void kth(node *root, int k)
{
    if(root==NULL)
        return;
    
    if(k==1)
    {
        cout<<root->data<<" ";
        return;
    }
    
    kth(root->left, k-1);
    kth(root->right, k-1);
    
}

void alllevel(node *root)
{
    int h =height(root);
    for(int i=1; i<=h; i++)
    {
        kth(root,i);
    }
    return;
}

node *buildtree(int *a, int s, int e)
{
    if(s>e)
        return NULL;
    
    int mid=(s+e)/2;
    node *root=new node (a[mid]);
    root->left= buildtree(a,s, mid-1);
    root->right=buildtree(a, mid+1, e);
    
    return root;
}

int main()
{
    int a[]={1,2,3,4,5,6,7};
    int n=7;
    node *root=buildtree(a, 0,n-1);
    alllevel(root);
    
    return 0;
}