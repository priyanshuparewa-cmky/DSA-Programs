// Implemention of Stack LinkedList:

#include<iostream>
using namespace std;

class Node
{   
    public:
    int data;
    Node *temp;

    Node(int value)
    {
        data = value;
        temp = NULL;
    }
};

class Stack
{
    Node *top;
    int size;       // Actual size of the stack

    public:
    Stack()
    {
        top = NULL;
        size = 0;
    }

    // Push 
    void Push(int value)
    {   
        Node *temp = new Node(value);
        if(temp == NULL)                // if you computer memory Heap is full then this execute othewise else part execute
        {
            cout<<"Stack is overflow\n";
            return;
        }
        else 
        {
            temp->temp = top;
            top = temp;
            size++;
            cout<<"Pushed "<<value<<" into the stack\n";
        } 
    }
    // Pop
    void Pop()
    {   
        if(top == NULL)
        {
            cout<<"Stack is underflow"<<endl;
            return;
        }
        else
        {
            cout<<"Popped "<<top->data<<" from the stack"<<endl;
            Node *temp = top;
            top = top->temp;
            delete temp;
            size--;
        }
    }
    // Peek
    int Peek()
    {
        if(top == NULL)
        {
            cout<<"Stack is empty";
            return -1;
        }
        else
        {
            return top->data;
        }
    }

    // IsEmpty
    bool IsEmpty()
    {
        return top == NULL;           // if NULL then return Yes otherwise return NO
    }
    
    //IsSize
    int IsSize()
    {
        return size;
    }
};

int main()
{
    Stack S;
    S.Push(3);
    S.Push(84);
    S.Push(4);
    S.Push(24);
    S.Pop();
    cout<<S.IsEmpty()<<endl;
    cout<<S.Peek()<<endl;
    cout<<S.IsSize()<<endl;
}