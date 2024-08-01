// Implemention or Stack with Array:

#include<iostream>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;

    public:
    bool flag;                  // this is used to handle the negative value only or nothing else
    Stack(int s)
    {
        size=s;
        top=-1;
        arr = new int[s];
        flag = 0;
    }

    // Push Operation
    void Push(int value)
    {
        if(top == size-1)
        {
            cout<<"Stack Overflow";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout<<"Pushed "<<value<<" into the Stack"<<endl;;
        }
    }

    // Pop Operarion
    void Pop()
    {
        if(top == -1)
        {
            cout<<"Stack Underflow";
            return;
        }
        else
        {   
            cout<<"Popped "<<arr[top]<<" from the Stack"<<endl;
            top--;
        }

        if(top==-1)
        flag = 0;
    }

    // Peak Operation
    int Peak()
    {
        if(top==-1)
        {
            cout<<"Stack is Empty";
            return 0;
        }
        else
        {
            return arr[top];
        }
    }

    // IsSize Operation
    bool IsSize()
    {
        return top+1;
    }

    // IsEmpty Operation
    bool IsEmpty()
    {
        return top-1;
    }
};

int main()
{
    Stack s(5);
    s.Push(6);
    s.Push(2);
    s.Push(3);
    s.Push(8);
    s.Pop();
    s.Push(1);
    // cout<<s.Peak()<<endl;

    int value = s.Peak();
    if(s.flag==0)
    cout<<value;



}

