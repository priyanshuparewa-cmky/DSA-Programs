#include<iostream>
using namespace std;

class Node 
{
    public:
    int data, height;                   // here we are using height, and with the help of height we are trying to find the node
    Node *left, *right;                 // which unbalance my tree:

    Node(int value)
    {
        data = value;
        height = 1;
        left = right = NULL;
    }
};


// for height
int getheight(Node *root)
{
    if(!root)
    return 0;

    return root->height; 
};

// for balancing
int getbalance(Node *root)
{
   return getheight(root->left) - getheight(root->right);
};


// Right Rotation
Node *rightRotation(Node *root)
{

    Node *child = root->left;
    Node *childRight = child->right;

    child->right = root;
    root->left = childRight;

    // update the height :
    root->height = 1 + max(getheight(root->left), getheight(root->right));
    child->height = 1 + max(getheight(child->left), getheight(child->right));

    return child;


}

// Left Rotation
Node *leftRotation(Node *root)
{

    Node *child = root->right;
    Node *childLeft = child->left;

    child->left = root;
    root->right = childLeft;

    // update the height :
    root->height = 1 + max(getheight(root->left), getheight(root->right));
    child->height = 1 + max(getheight(child->left), getheight(child->right));

    return child;

}


Node *insert(Node *root, int key)
{
    // if the elements do not exist:

    if(!root)
    return new Node (key);

    // if the elements exist:

    if(key < root->data)                    // insert at left side
    root->left = insert(root->left,key);
    else if(key > root->data)               // insert at right side
    root->right = insert(root->right,key);
    else                                    // if both(root, key) elements are same, just return root
    return root;

    

    // Update Height of the Tree:

    root->height = 1 + max(getheight(root->left), getheight(root->right));

    // Balance checking of the tree:

    int balance = getbalance(root);

    if(balance > 1 && key < root->left->data)       // Left Left case
    {

    return rightRotation(root);

    }

    else if(balance > 1 && key > root->left->data)     // Left Right case
    {
        root->left = leftRotation(root->left);          // Middle Node
        return rightRotation(root);
    }

    else if(balance < -1 && root->right->data < key)    // Right Right case
    {

    return leftRotation(root);

    }

    else if (balance < -1 && root->right->data > key)   // Right Left case
    {
        root->right = rightRotation(root->right);       // Middle Node
        return leftRotation(root);
    }

    // if tree is not un_balanced
    else
    {
        return root;
    }

}

void InOrder(Node *root)
{
    if(!root)
    return ;

    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PreOrder(Node *root)
{
    if(!root)
    return;

    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);

}

int main()
{

    // Duplicate elements are not allowed:

    Node *root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 50);
    root = insert(root, 70);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 90);
    root = insert(root, 15);

    cout<<"Preorder :"<<endl;
    PreOrder(root);
    
    cout<<endl;
    cout<<"Inorder :"<<endl;
    InOrder(root);

}