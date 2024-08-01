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

    // ................... Delete

    void Heapify(int index)
    {
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;

        // Largest will store the index of the element which
        // is greater between parent, left child and right child:

        if(left<size && arr[left]>arr[largest])
        largest = left;

        if(right<size && arr[right]>arr[largest])
        largest = right;


        if(largest!=index)
        {
            swap(arr[index], arr[largest]);
            Heapify(largest);
        }
    }

    void Delete()
    {
        if(size == 0)
        {
            cout<<"Heap is underflow";
            return;
        }

        cout<<arr[0]<<" deleted from the heap \n";
        arr[0] = arr[size - 1];
        size--;

        if(size == 0)
        return;

        Heapify(0);         // now the element which is present here we just move it to 
                            // its correct position,                    
    }
};



int main()
{
MaxHeap h1(6);
h1.insert(4);
h1.insert(23);
h1.insert(11);
h1.Delete();                //delete
h1.print();

h1.insert(84);
h1.insert(12);
h1.insert(34);

h1.Delete();
h1.Delete();
h1.Delete();
h1.Delete();
h1.print();

}