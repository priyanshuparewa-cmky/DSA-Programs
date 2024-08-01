#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};

int main()
{
    Node *head = NULL;

    if(head==NULL)              // if linked list doesn't exist
    {
        head = new Node(5);
    }
    else                        // if linked list exist
    {
    Node *temp = new Node(5);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }

    // for printing the value

    Node *trev = head;
    while(trev)
    {
        cout<<trev->data<<" ";
        trev = trev->next;
    }

}