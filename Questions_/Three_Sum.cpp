// BruteForce_Approach:

/*
#include<iostream>
using namespace std;

int main()
{
    int arr[100];

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elements in array : ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int target;
    cout<<"Enter the number which is some of 3 number : ";
    cin>>target;

    bool present=false;
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(arr[i]+arr[j]+arr[k]==target)
                present = true;
                break;
            }
        }
    }
    if(present)
    {
        cout<<"Element Present:";
    }
    else
    {
        cout<<"Not Present:";
    }

    return 0;
}

*/


// Another_Approach to solve same problem:
// By using Binary search:

/*

#include<iostream>
using namespace std;

int main()
{
    int arr[100];

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elements in array : ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int target;
    cout<<"Enter the number which is some of 3 number : ";
    cin>>target;

    for(int i=n-2; i>=0; i--)           // Bubble_Sort:
    {
        for(int j=0; j<=i; j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j], arr[j+1]);
        }
    }

    bool present=false;
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            int find =target-(arr[i]+arr[j]);

            cout<<find<<endl;

            int start=j+1, end=n-1, mid;

            while(start<end)
            {
                mid = (start+end)/2;

                if(arr[mid]==find)
                {
                present = true;
                break;
                } 

                else if(arr[mid]<find)
                {
                start=mid+1;
                }

                else
                end=mid-1;

            }
        }
    }

    if(present){
        cout<<"Found:";
    }
    else
    {
        cout<<"Not Found:";
    }
}

*/


// Another_Approach:
// By using Two_sum method:

#include<iostream>
using namespace std;

int main()
{
    int arr[100];

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elements in array : ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int target;
    cout<<"Enter the number which is some of 3 number : ";
    cin>>target;

    for(int i=n-2; i>=0; i--)           // Bubble_Sort:
    {
        for(int j=0; j<=i; j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j], arr[j+1]);
        }
    }

    for(int i=0; i<n-2; i++)
    {
        int ans = target - arr[i];

        int start=i+1, end=n-1;

        while(start<end)
        {
            if(arr[start]+arr[end]==ans)
            {
                cout<<"Found:";
                break;
            }
            else if(arr[start]+arr[end]>ans)
            {
                end--;
            }
            else
            start++;
        }
    }

    return -1;

}