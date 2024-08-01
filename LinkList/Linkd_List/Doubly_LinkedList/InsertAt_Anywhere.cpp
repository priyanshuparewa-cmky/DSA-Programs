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

Node *CreateDLL(int arr[], int index, int size, Node *back)         // This function only create the linkedlist by using Recursion
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
    // Node *tail = NULL;

    head = CreateDLL(arr,0,5,NULL);         // this is function which call the CreateDLL and CreatDLL Create LinkedList


    // FROM HERE THE ACTUAL CODE START TO INSERT THE NODE AT GIVEN POSITION

    int pos=2;

    // insert at start
    if(pos==0)
    {   
        // Linked List exist na kare
        if(head == NULL)
        {
            head = new Node(5);
        }
        // Exist Karti
        else
        {
            Node *temp = new Node(5);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    else
    {
        Node *curr = head;
        // Go to the node after which i have to insert
        while(--pos)
        {
            curr = curr->next;
        };

            // Insert at end
            if(curr->next == NULL)      // this is last node
            {
                Node *temp = new Node(5);
                temp->prev = curr;
                curr->next = temp;
            }
            // Insert at Middle
            else
            {
                Node *temp = new Node(5);
                temp->next = curr->next;
                temp->prev = curr;
                curr->next = temp;
                temp->next->prev = temp;
            }
    }

    // for printing the value

    Node *trev = head;
    while(trev)
    {
        cout<<trev->data<<" ";
        trev = trev->next;
    };

}