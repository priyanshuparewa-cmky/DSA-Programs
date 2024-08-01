// Selection_Sort
#include<iostream>
using namespace std;

int main()
{
    int arr[6]={6,5,8,9,2,1};                      // Time Complexity: 
    for(int i=0; i<5; i++){                        // Worst_Case : O(nSquare),  Best_Case : omega(nSquare),  Avg._Case : Thita(nSquare).
        int index = i;
                                        
        for(int j=i+1; j<6; j++){                   // Space Complexity:
            if(arr[j]<arr[index]){                  // Auxillary Space Complexity:O(1),  Total Space Complexity: O(n).
                index = j;
            }
            swap(arr[i],arr[index]);
        }
    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}



/*
// Selection_Sort by taking input from thr user-

#include<iostream>
using namespace std;

int main(){

    int arr[1000];
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the elements of array : ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    for(int i=0; i<n-1; i++){

        int index = i;
        for(int j=i+1; j<n; j++){

            if(arr[j]<arr[index])
             index=j;
        }

        swap(arr[i], arr[index]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
*/