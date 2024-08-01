#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next , *prev;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

class Dequeue
{
    Node *front, *rear;
    public:

    Dequeue()
    {
        front = rear = NULL;
    }

    // Push_Front:
    void Push_front(int x)
    {
        if(front==NULL)
        {
            front=rear=new Node(x);
            cout<<"Pushed "<<x<<" into the Dequeue from front:\n";
            return;
        }
        else
        {
            Node *temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            cout<<"Pushed "<<x<<" into the Dequeue from front:\n";
            return;
        }
    }

    // Push_Back:
    void Push_back(int x)
    {
        if(front==NULL)
        {
            front=rear = new Node(x);
            cout<<"Pushed "<<x<<" into the Dequeue from back:\n";
            return;
        }
        else
        {
            Node *temp = new Node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            cout<<"Pushed"<<x<<" into the Dequeue from back:\n";
            return;
        }
    }

    // Pop_Front:
    void Pop_front()
    {
        if(front == NULL)
        {
            cout<<"Dequeue is underflow:\n";
            return;
        }
        else
        {
            Node *temp = front;
            cout<<"Popped "<<temp->data<<" from the front:\n";
            front = front->next;
            delete temp;

            if(front)           // if more the one node
            {
                front->prev = NULL;
            }
            else                // if there is only one node
            {
                rear = NULL;
            }
        }
    }

    // Pop_Back:
    void Pop_back()
    {
        if(front == NULL)
        {
            cout<<"Dequeue is underflow:\n";
            return;
        }
        else
        {
            Node * temp = rear;
            cout<<"Popped "<<temp->data<<" from the back:\n";
            rear = rear->prev;
            delete temp;

            if(rear)            // if more then one node exist
            {
                rear->next = NULL;
            }
            else                // if there is only one node
            {
                front = NULL;
            }
        }
    }

    // Start:
    int Start()
    {
        if(front == NULL)
        {
            cout<<"Dequeue is empty:\n";
            return -1;
        }
        else
        {
            return front->data;
        }
    }

    // End:
    int End()
    {
        if(front == NULL)
        {
            cout<<"Empty\n";
            return -1;
        }
        else
        {
            return rear->data;
        }
    }
};

int main()
{
    Dequeue d;
    d.Push_back(38);
    d.Push_front(21);
    d.Pop_back();
    cout<<d.Start();
    d.Pop_back();
    d.Pop_back();
}