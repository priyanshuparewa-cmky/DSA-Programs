// Day-88, 

#include<iostream>
using namespace std;

int Subsum(int arr[],int index,int n, int sum)
{
    if(sum==0)
    return 1;

    if(index==n || sum<0)
    return 0;

   return Subsum(arr,index+1,n,sum) + Subsum(arr,index,n,sum-arr[index]);
}

int main()
{
    int arr[]={2,3,4};
    int sum = 6;

    cout<<Subsum(arr,0,3,sum);
}
