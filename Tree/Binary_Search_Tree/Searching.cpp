#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left, *right;

    Node (int value)
    {
        data = value;
        left = right = NULL;
    }
};

// For inserting the node
Node *insert(Node *root, int target)
{
    if(!root)
    {
        Node *temp = new Node (target);
        return temp;
    }

    if(target < root->data)
    {
    root->left = insert(root->left, target);
    }
    else
    {
        root->right = insert(root->right, target);
    }

    return root;
}

// For searching the node or target value
bool search(Node* root, int target)
{
    if(!root)
    return 0;

    if(root->data == target)
    return 1;

    if(target < root->data)
    return search(root->left, target);

    else
    return search(root->right, target);
}


int main()
{

    int arr[] = {7,4,76,13,2,5,87,90,23,11};

    Node *root = NULL;
    for(int i=0; i<10; i++)
    root = insert(root,arr[i]);

    cout<<search(root, 11);
}