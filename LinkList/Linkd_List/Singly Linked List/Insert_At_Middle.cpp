// insertion at middle

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    Node *Head;
    Head = NULL;
    
    int arr[]={2,4,6,8,10};

    for(int i=0; i<5; i++)
    {
        if(Head==NULL)                  // if no Node is present then first this statement create the first Node.
        {
            Head = new Node(arr[i]);
        }
        else                            // After the first Node created then it create the another Node and added them.
        {
            Node *temp;                         
            temp = new Node(arr[i]);
            temp->next=Head;
            Head = temp;
        }
    }

        // This code is for Inserting the value at the middle or the given position:
        int pos = 3;
        int value = 28;

        Node *temp = Head;
        pos--;

        while(pos--)
        {
            temp = temp->next;
        };

        Node *temp2 = new Node(value);
        temp2->next = temp->next;
        temp->next = temp2;
    


    
        temp = Head;              // This code is used to print the LinkdList data
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    
}