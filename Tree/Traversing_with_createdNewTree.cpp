#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

Node *BinaryTree()                      // creating a binary tree
{

    int x;
    cin>>x;

    if(x==-1)
    return NULL;

    Node *temp = new Node(x);

    cout<<"Enter the left child of "<<x<<" : ";
    temp->left = BinaryTree();                      // Left child created:

    cout<<"Enter the right child of "<<x<<" : ";
    temp->right = BinaryTree();                     // Right child created:

    return temp;
};

// Pre_Order Traversing
void PreOrder(Node *root)
{
    if(root == NULL)
    return;

    cout<<root->data<<" ";               // Node
    PreOrder(root->left);               // Left
    PreOrder(root->right);              // Right
};

// In_Order Traversing
void InOrder(Node *root)
{
    if(root == NULL)
    return;

    InOrder(root->left);                // Left
    cout<<root->data<<" ";              // Node
    InOrder(root->right);               // Right
};

// Post_Order Traversing
void PostOrder(Node *root)
{
    if(root == NULL)
    return;

    PostOrder(root->left);                 // Left
    PostOrder(root->right);                // Right
    cout<<root->data<<" ";                 // Node
};

int main()
{

    // Creating Tree:
    cout<<"Enter the Root child : ";

    Node *root;
    root = BinaryTree();


    // Traversing Into the Tree

    // Pre_Order:
    cout<<"\nPre_Order : ";
    PreOrder(root);

    // In_Order:
    cout<<"\nIn_Order : ";
    InOrder(root);

    // Post_Order;
    cout<<"\nPost_Order : ";
    PostOrder(root);

}