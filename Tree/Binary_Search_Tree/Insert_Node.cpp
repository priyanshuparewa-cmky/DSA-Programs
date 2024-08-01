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
}

void In_Order(Node *root)
{
    if(!root)
    return ;
    //
    In_Order(root->left);
    //Node
    cout<<root->data<<" ";
    //Right
    In_Order(root->right);
}

int main()
{

    int arr[] = {7,4,76,13,2,5,87,90,23,11};

    Node *root = NULL;
    for(int i=0; i<10; i++)
    root = insert(root,arr[i]);

    // Traverse by InOder                 and the output has achived in ascending order:

    In_Order(root);
}