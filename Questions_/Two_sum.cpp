//BruteForce_Approach:

/*

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

int arr[100];
vector<int>ans;         

    int n;
    cout<<"Enter the size : ";
    cin>>n;

    cout<<"Enter the elements of array : ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int target;
    cout<<"Enter the sum of 2 number : ";
    cin>>target;

    vector<int>a(arr, arr+n);   // This vector is basically created for sort the array elements:
    sort(a.begin(), a.end());

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==target)
            {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                break;
            }
        }
    }

    for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<<" ";
}

*/


// Two Pointer_Approach:

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

int arr[100];        

    int n;
    cout<<"Enter the size : ";
    cin>>n;

    cout<<"Enter the elements of array : ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int target;
    cout<<"Enter the sum of 2 number : ";
    cin>>target;

    vector<int>a(arr, arr+n);   // This vector is basically created for sort the array elements:
    sort(a.begin(), a.end());


    int start=0, end=n-1;

    while(start<end)
    {
        if(arr[start]+arr[end]==target)
        {
        return 1;
        break;
        }

        else if(arr[start]+a[end]<target)
        {
        start++;
        }

        else
        {
        end--;
        }
    }


    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

    return 0;



}