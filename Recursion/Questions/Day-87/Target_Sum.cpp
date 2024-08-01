// Day - 87

#include<iostream>
using namespace std;

bool find(int arr[], int index, int n, int target)
{
    if(target==0)
    return 1;

    if(index==n || target<0)
    return 0;
        
    //   for left side traversing -> or_operator -> for right side traversing

    return find(arr,index+1,n,target) || find(arr,index+1,n,target-arr[index]);
}

int main()
{
    int arr[]={3,6,4,5};
    int target=42;

    cout<<find(arr,0,4,target);
}