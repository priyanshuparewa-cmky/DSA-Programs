// Day- 88

#include<iostream>
using namespace std;

int SubsetSum(int arr[], int index, int sum, int n)
{
    if(sum==0)
    return 1;

    if(index==n || sum<0)
    return 0;

    return SubsetSum(arr,index+1,sum,n) + SubsetSum(arr,index+1,sum-arr[index],n);
}

int main()
{
    int arr[] = {2,5,6,1};
    int sum=8;

    cout<<SubsetSum(arr,0,sum,4);
}