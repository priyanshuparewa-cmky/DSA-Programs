#include<iostream>
using namespace std;

int main(){

    
    int arr[6] = {4,6,2,78,9,10};

    cout<<sizeof(arr)<<endl;            /* This shows the size of the given array */

    cout<<sizeof(arr)/sizeof(arr[0]);   /* This shows the how many elements are present the array */

    return 0;
}