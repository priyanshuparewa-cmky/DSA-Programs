// Here we Insert the Node at the Beginning by using Recursion:

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

Node* CreateLinkedList(int arr[], int index, int size, Node *prev)
{
    // Base Case

    if(index==size)
    return prev;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = prev;

    return CreateLinkedList(arr, index+1, size ,temp);
}
int main()
{
    Node *Head;
    Head = NULL;

    int arr[] = {2,4,6,8,10};

    Head = CreateLinkedList(arr, 0, 5,NULL);

    Node *temp;
    temp = Head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}