// Quick sort

#include<iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pos = start;

    for(int i=start; i<=end; i++)
    {
        if(arr[i] <= arr[end])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }

    return pos-1;
}

void QuickSort(int arr[], int start, int end)
{

    if(start>=end)
    return;

    int pivot = partition(arr, start, end);

    // Left side
    QuickSort(arr,start,pivot-1);

    // Right side
    QuickSort(arr, pivot, end);
}

int main()
{
    int arr[] = {10,9,5,6,3,7,8,2,1,11};
    QuickSort(arr,0,9);

    for (int i=0; i<10; i++)
    cout<<arr[i]<<" ";
}