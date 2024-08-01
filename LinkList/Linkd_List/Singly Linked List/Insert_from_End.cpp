// In this code, we insert the Node at the end;

#include<iostream>
using namespace std;

class Node
{   
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

int main()
{
    int arr[] = {2,4,6,8,10};

    Node *Head, *Tail;
    Head = Tail = NULL;

    for(int i=0; i<5; i++)
    {   
        if(Head==NULL)              // If LinkdList is not created:
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        else
        {                                         // If LinkdList is created:
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }

    Node *temp;
    temp = Head;
    while(temp)
    {
    cout<<temp->data<<" ";
    temp = temp->next;
    }
}