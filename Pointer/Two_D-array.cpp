#include<iostream>
using namespace std;

int main()
{
    // Creating two dimension array by using new keyword and stored in Heap Memory

    int n,m;        // n=rows, m=column

    cin>>n>>m;

    int **ptr = new int *[n];
    for(int i=0; i<n; i++)
    {
    ptr[i] = new int[m];
    }


    // Taking the input value of array from the user

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>ptr[i][j];
        }
    }


    // Producing the output value of array 

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<ptr[i][j]<<" ";
            cout<<endl;
        
    }
}