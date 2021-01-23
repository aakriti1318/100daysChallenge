//worst case complexity is O(n^2) in case of skewed bt
#include<iostream>
#include<queue>
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
    
    printkth(root->left,  k-1);
    printkth(root->right, k-1);
}

void printAlllevel(node *root)
{
    int h=height(root);
    for(int i=1; i<=h; i++)
    {
        printkth(root, i);
        cout<<endl;
    }
    return;
}

void  bfs(node *root)
{
    queue<node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        node *f = q.front();
        cout<<f->data<<" ";
        q.pop();
        
        if(f->left)
        {
            q.push(f->left);
        }
        
        if(f->right)
        {
            q.push(f->right);
        }
    }
    return;
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
    //printkth(root , 3); 
    //printAlllevel(root);
    bfs(root);
    return 0;
}