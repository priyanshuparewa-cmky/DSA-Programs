// Bubble_Sort

#include<iostream>
using namespace std;

int main(){

    int arr[1000];

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the elements of array : ";         // Time Complexity 
    for(int i=0; i<n; i++){                        //  Worst and Average case time complexity is : O(n^2)
        cin>>arr[i];                              //   Best case time complexity is : O(n)
    }

    for(int i=n-2; i>=0; i--){

        bool swapped=0;

        for(int j=0; j<=i; j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j], arr[j+1]);
            swapped=1;
        }
        if(swapped==0)
        break;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}