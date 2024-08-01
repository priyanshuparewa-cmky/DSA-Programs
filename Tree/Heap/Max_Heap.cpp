// Insertion in max heap:
#include<iostream>
using namespace std;

class MaxHeap
{
    public:
    int *arr;
    int size;               // total element in heap
    int total_size;         // total size of array

    public:

    MaxHeap(int n)
    {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    // insert into the heap:

void insert(int value)
{
    // check the size of heap is available or not
    if(size == total_size)
    {
        cout<<"Heap Overflow\n";
        return;
    }

    arr[size] = value;
    int index = size;
    size++;

    // compare it with its parent:

    while(index>0 && arr[(index-1)/2] < arr[index])
    {
        swap(arr[index], arr[(index-1)/2]);
        index = (index - 1)/2;
    };

    cout<<arr[index]<<" is inserted into the heap \n";
    
    }

    void print()
    {
        for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";

        cout<<endl;
    }
};



int main()
{
MaxHeap h1(6);
h1.insert(4);
h1.insert(23);
h1.insert(11);

h1.print();

h1.insert(84);
h1.insert(12);
h1.insert(34);

h1.print();

h1.insert(92);
}