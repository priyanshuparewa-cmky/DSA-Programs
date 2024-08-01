#include<iostream>
#include<queue>
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

int main()
{
    int x;
    cout<<"Enter the element of Root Node : ";
    cin>>x;

    int first, second;

    queue<Node*>q;
    Node *root = new Node(x);
    q.push(root);

    // Building the Binary Tree

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout<<"Enter the left child of "<<temp->data<<" : ";             
        cin>>first;                    // Left child created

        if(first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }

        cout<<"Enter the right child of "<<temp->data<<" : ";
        cin>>second;                    // Right child created

        if(second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
}                                               
  
/* visualization of the tree output
                                        1
                                    2       3
                                  4   5   6   7
                                1                9
                             10   11           12  13
*/