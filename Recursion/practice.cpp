#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int start, int mid, int end)
{
    vector<int>temp(end-start+1);

    int left=start, right=mid+1, index=0;

    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index] = arr[right];
            index++;
            right++;
        }
        else{
            temp[index] = arr[left];
            index++;
            left++;
        }
    }

        // if any remaining element is present in the left side of array
        while(left<=mid)
        {
            temp[index] = arr[left];
            index++;
            left++;
        }

        // if any remaining element is present in the right side of array
        while(right<=end)
        {
            temp[index] = arr[right];
            index++;
            right++;
        }

        index=0;
        while(start<=end)
        {
            arr[start]=temp[index];
            start++;
            index++;
        }
}

void mergesort(int arr[], int start, int end)
{
    if(start==end)
    return;
    int mid=start+(end-start)/2;    // it divides the array into two equal part
    mergesort(arr,start,mid);       // for left side division
    mergesort(arr,mid+1,end);       // for right side division

    merge(arr,start,mid,end);

}

int main()
{
    int arr[]={6,4,7,2,9,8,3,5};

    mergesort(arr,0,8);

    for(int i=0; i<8; i++)
    {
        cout<<arr[i]<<" ";
    } 

}