#include<iostream>
using namespace std;

int main()
{
    int arr[100];

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    cin>>arr[i];

    int index=arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i]<index)
        index=arr[i];
    }
    cout<<"1st smallest: "<<index<<endl;


    int sec_min=index;
    cout<<sec_min<<endl;
    index=arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i]<index && arr[i]>sec_min)
        index=arr[i];
    }

    cout<<"2nd smallest: "<<index<<endl;


    int third_min=index;
    cout<<third_min<<endl;
    index=arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i]<index && arr[i]>third_min)
        index=arr[i];
    }

    cout<<"3rd smallest: "<<index<<endl;

}