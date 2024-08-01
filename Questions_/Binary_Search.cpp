//Binary_Search

#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){            // Time_Complexity : Worst_Case & Average_Case :O(logn),  Best_Case:Omega(1).

    int start=0 , end =n-1, mid;

    while(start<=end){
        mid = (start+end)/2;
        // OR [mid = start + (end-start)/2]             

            if(arr[mid]==key)           // When this code execute in any online compliar, it shows a run time error
            return mid;                 // which is mid overflow [mid = (start+end)/] overflow, so the correct way is 
            else if(arr[mid]<key)       // [mid = start + (end-start)/2]
            start = mid+1;
            else
            end = mid-1;
    }
    return -1;
}

int main(){

    int arr[1000];
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Ener the elements in array : ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int key;
    cout<<"Enter the key to search : ";
    cin>>key;

    cout<<BinarySearch(arr,n,key);
}