#include<iostream>
using namespace std;

int main()
{
    int arr[20];
    int n;

    cout<<"Enter the size of array ";
    cin>>n;
    cout<<"Enter the element of array ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[j],arr[i]);
            }
        }
    }

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}