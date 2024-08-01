
// 1st method:
/*
#include<iostream>
using namespace std;

int main()
{
    int arr[100];           // enter only 0's and 1's 

    int n;
    cout<<"Enter the size : ";
    cin>>n;

    cout<<"Enter the elements but onle 0 and 1 : ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int count0 = 0;
    int count1 = 1;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        count0++;
        else
        count1++;
    }

    for(int i=0; i<count0; i++)
    {
    arr[i]=0;
    cout<<arr[i]<<" ";
    }

    for(int i=count0; i<n; i++)
    {
    arr[i]=1;
    cout<<arr[i]<<" ";
    }
}

*/

// 2nd method Two Pointer Concept:

#include<iostream>
using namespace std;

int main()
{
    int arr[100];           // enter only 0's and 1's 

    int n;
    cout<<"Enter the size : ";
    cin>>n;

    cout<<"Enter the elements but only 0 and 1 : ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int start=0, end=n-1;

    while(start<end)
    {
    // 1 0 1 0 1 0 --> 0 0 0 1 1 1
        if(arr[start]==0)
        start++;
        else
        {
            if(arr[end]==0)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else
            end--;
        }
    }

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}