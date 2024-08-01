// Find missing and repeating number in the given array:

// " This code works on the online compiler:"

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int arr[7]={4,3,2,1,2,7,6};
    int n=7;

    for(int i=0; i<n; i++)      // decreasing vlaue by 1
    arr[i]--;

    for(int i=0; i<n; i++)      
    {
        arr[arr[i]%n]+=n;
    }


    // missing value

    for(int i=0; i<n; i++)
    {
        if(arr[i]/n == 0)
        {
        cout<<"Missing value : "<<i+1<<endl;
        break;
        }
    }

    // Repeating value

    for(int i=0; i<n; i++)
    {
        if(arr[i]/n == 2)
        cout<<"Repeating value : "<<i+1<<endl;
    }

    return 0;
}