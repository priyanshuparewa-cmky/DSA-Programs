// Implemention of Queue with Array:

#include<iostream>
using namespace std;

class Queue
{
    int *arr;
    int front, rear;
    int size;

    public:
    Queue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }

    // kya queue khali hai:................
    bool isEmpty()
    {
       return front == -1;

    }

    // kya quere full hai:...........................
    bool isFull()
    {
        return rear==size-1;
    }

    // insert the element into the queue:...................
    void push(int x)
    {
        // is our queue is empty or not:
        if(isEmpty())
        {
            cout<<"Pushed "<<x<<" into the Queue\n";
            front = rear = 0;
            arr[0] = x;
        }

        // is our queue is full or not:
        else if(isFull())
        {
            cout<<"Queue is overflow\n";
            return;
        }

        // insert the element into the queue
        else
        {
            cout<<"Pushed "<<x<<" into the Queue\n";
            rear = rear+1;
            arr[rear] = x;
        }
    }

    // remove the element from the queue:...................
    void pop()
    {
        // if Queue is empty:
        if(isEmpty())
        {
            cout<<"Queue is Underflow\n";
            return;
        }

        // if Queue is not empty
        else
        {
            cout<<"Popped "<<arr[front]<<" from the Queue\n";
            if(front == rear)               // if both are pointing the same element then move to the null position:
            front = rear = -1;
            else                            // we move front to next and previous element popped:
            front = front+1;
        }
    }
    // check the start or front element of the queue:................
    int start()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty\n";
            return -1;
        }

        else
        return arr[front];
    }
};

int main()
{
//     Queue q(5);

//     q.push(48);
//     q.push(34);
//     q.push(23);

//     q.pop();

//     cout<<q.isFull()<<endl;
//     cout<<q.isEmpty()<<endl;

//     int x = q.start();
//     if(!q.isEmpty())
//     cout<<x<<endl;


    Queue q(5);

    q.push(48);
    q.push(34);
    q.push(23);

    q.pop();
    q.push(344);
    q.push(522);
    q.push(847);

}