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

int main()
{
    cout<<"Enter the Root child : ";
    // Node *root;
    // root = BinaryTree();
}