#include <iostream>
 
using namespace std;
 
struct node
{
    int data;
    node *left;
    node *right;
};
 
node *newNode(int key)
{
    node *mNode = new node();
    mNode->data = key;
    mNode->left = mNode->right = nullptr;
 
    return mNode;
}
 
node *insert(node *m_node, int key)
{
    if (m_node == nullptr)
        return newNode(key);
 
    if (key < m_node->data)
    {
        m_node->left = insert(m_node->left, key);
    }
    else if (key > m_node->data)
    {
        m_node->right = insert(m_node->right, key);
    }
    else
    {
        m_node->left = insert(m_node->left, key);
    }
 
    return m_node;
}
 
int treeHeight(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    else
    {
        int lD = treeHeight(root->left);
        int rD = treeHeight(root->right);
 
        if (lD > rD)
        {
            return lD + 1;
        }
        else
        {
            return rD + 1;
        }
    }
}
 
int main() {
    int noOfElements, value, lHeight = 0, rHeight = 0;
    cin >> noOfElements;
 
    node *root = nullptr;
 
    for (int i = 0; i < noOfElements; i++)
    {
        cin >> value;
        if (root == nullptr)
        {
            root = insert(root, value);
        }
        else
        {
            insert(root, value);
        }
    }
    
    
    cout << treeHeight(root) << endl;
}
