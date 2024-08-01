// Heap Sort : 
/*  Algo:
    1. convert array int max heap
    2. replace first element with the last element
    3. decrease size by 1
    4. apply heapify
*/

#include<iostream>
using namespace std;

void Heapify(int arr[], int index, int n)
{
    int largest = index;
    int left = 2*index+1;
    int right = 2*index+2;

    if(left<n && arr[left] > arr[largest])
    largest = left;
    if(right<n && arr[right] > arr[largest])  
    largest = right;

    if(largest != index)
    {
        swap(arr[largest], arr[index]);
        Heapify(arr,largest,n);
    }
}

void BulidMaxHeap(int arr[],int n)
{
    // step down approach
    for(int i = n/2-1; i>=0; i--)
    {
        Heapify(arr,i,n);
    }

}

void printHeap(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

// output of max heap
// 70 14 18 11 5 13 8 9 10 3

void sortArray(int arr[], int n)        // apply heap sort
{
    for(int i=n-1; i>0; i--)
    {
        swap(arr[i], arr[0]);
        Heapify(arr,0,i);               // 0 = inder num, (i=n-1) = size of max heap  
    }
}

int main()
{
    int arr[] = {10,3,8,9,5,13,18,14,11,70};
    BulidMaxHeap(arr,10);

    sortArray(arr,10);              // Heap sort

    printHeap(arr,10);
}