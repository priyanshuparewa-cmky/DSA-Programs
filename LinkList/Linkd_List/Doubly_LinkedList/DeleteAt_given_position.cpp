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

    // DELETE AT GIVEN POSITION......................................................

    int pos =  3;

    // Delete at start....

    if(pos==1)               
    {   
        if(head-> next == NULL)            // if there is only one node then it runs
        {
            delete head;
            head = NULL;
        }
        else                        // if in linkedlist more then one element exists
        {
            Node *temp = NULL;
            head = head->next;
            delete temp;
            head->prev = NULL;   
       }
            
    } 
    else
    {
        Node * curr = head;
        while(--pos)
        curr = curr->next;

        // Delete at end....
        if(curr->next == NULL)              // we are at the last node
        {
            curr->prev->next = NULL;
            delete curr;
        }

        // Delete at middle....
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
        }
    
    }    


    // this is for only printing statement:

    Node *trev = head;
    while(trev)
    {
        cout<<trev->data<<" ";
        trev = trev->next;
    }

}