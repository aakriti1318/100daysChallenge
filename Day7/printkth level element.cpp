#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *left, *right;
    
    node(int d)
    {
        data=d;
        left= NULL;
        right =NULL;
    }
};

node *buildnode()
{
    int d;
    cin>>d;
    
    if(d==-1)
    {
        return NULL;
    }
    
    node *root= new node(d);
    root->left= buildnode();
    root->right =buildnode();
    
    return root;
}

void printpre(node *root)
{
    if(root==NULL)
    {
        return;
    }
    
    cout<<root->data<<" ";
    printpre(root->left);
    printpre(root->right);
}


void printin(node *root)
{
    if(root==NULL)
        return ;

    printin(root->left);
    cout<<root->data<<" ";
    printin(root->right);
    
}

void printpost(node * root)
{
    if(root==NULL)
        return;
    
    printpost(root->left);
    printpost(root->right);
    cout<<root->data<<" ";
}

int height(node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ls= height(root->left);
    int rs= height(root->right);
    return max(ls, rs)+1;
}

void printkth(node *root, int k)
{
    if(root==NULL)  
        return;
    
    if(k==1)
    {
        cout<<root->data<<" ";
        return;
    }
    
    printkth(root->left, k-1);
    printkth(root->right, k-1);
}
int main()
{
    node *root=buildnode();
    /*cout<<"preorder\n";
    printpre(root);
    cout<<"\ninorder\n";
    printin(root);
    cout<<"\npostorder\n";
    printpost(root);
    cout<<endl;
    
    cout<<height(root)<<endl;*/
    printkth(root , 3); 
    return 0;
}