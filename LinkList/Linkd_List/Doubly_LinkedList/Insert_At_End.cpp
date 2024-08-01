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


int arr[5] = {1,2,3,4,5};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    for(int i=0; i<5; i++)
    {
        if(head==NULL)              // if linked list doesn't exist
        {
            head = new Node(arr[i]);
            tail = head;
        }
        else                        // if linked list exist
        {
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    // for printing the value

    Node *trev = head;
    while(trev)
    {
        cout<<trev->data<<" ";
        trev = trev->next;
    }

}