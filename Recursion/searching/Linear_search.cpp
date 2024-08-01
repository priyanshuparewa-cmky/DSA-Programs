#include<iostream>
using namespace std;

bool linearSearch(int arr[], int x, int index, int n){

    if(index==n)
    return 0;

    if(arr[index]==x)
    return 1;

    return linearSearch(arr,x,index+1,n);
}

int main()
{
    int arr[7] = {2,4,7,3,11,8,12};

    int x =8;   // search for this value
    
    cout<<linearSearch(arr,x,0,7);
}