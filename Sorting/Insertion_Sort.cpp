//Insertion Sort

#include<iostream>
using namespace std;

int main(){

    int arr[1000];

    int n;                                          // Time Complexity : Worst_Case:- O(n^2). & Average_Case:- Thita(n^2).  Best_Case:- Omega(n).
    cout<<"Enter the size of array : ";            //  Space Complexity : Auxillary_Case:- O(1).
    cin>>n;

    cout<<"Enter the elements in array : ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    for(int i=0; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1])         // if we change the sign '<' to '>' then, insertion sort give the output in decending order.
            swap(arr[j], arr[j-1]);
            else
            break;
        }
    }

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}