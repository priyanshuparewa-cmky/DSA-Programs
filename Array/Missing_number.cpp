#include<iostream>
using namespace std;

int main()
{

    int arr[100];

    int n;
    cout<<"Enter the size = ";
    cin>>n;

    cout<<"Enter the elements of array = ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int natural_no=n*(n+1)/2;

    int sum=0;

    for(int i=0; i<n-1; i++)
    {
        sum+=arr[i];
    }

    cout<<"Missing number : "<<natural_no-sum;

}