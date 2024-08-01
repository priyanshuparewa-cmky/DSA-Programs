#include<iostream>
using namespace std;

bool BinarySearch(int arr[], int start, int end, int X)
{
    if(start>end)
    return 0;

    int mid = start + (end-start)/2;
    if(arr[mid]==X)
    return 1;

    else if(arr[mid]<X)
    return BinarySearch(arr,mid+1,end,X);

    else
    return BinarySearch(arr,start,mid-1,X);
}

int main()
{
    int arr[6]={3,8,11,15,20,22};

    int X = 150;

    cout<<BinarySearch(arr,0,5,X);
}