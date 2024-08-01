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

Node *CreateDLL(int arr[], int index, int size, Node *back)
{
    if(index==size)
    return NULL;

    Node *temp = new Node(arr[index]);
    temp->prev=back;

    temp->next=CreateDLL(arr, index+1, size, temp) ; 
    return temp;
}



int main()
{
    int arr[5] = {1,2,3,4,5};

    Node *head = NULL;
    // Node *Tail = NULL;

    head = CreateDLL(arr,0,5,NULL);

    // Delete at start................................................................

    if(head != NULL)                // if there is no linkedlist present
    {   
        if(head-> next == NULL)            // if there is only one node then it runs
        {
            delete head;
            head = NULL;
        }
        else                        // if linkedlist exists
        {
            Node *temp = NULL;
            head = head->next;
            delete temp;
            head->prev = NULL;   
       }
            
    }     

    Node *trev = head;
    while(trev)
    {
        cout<<trev->data<<" ";
        trev = trev->next;
    }

}