#include <iostream>
using namespace std;

int main()
{
    int arr[5]= {2,5,1,7,3};

    // Print the address of first element or 0th index

    cout<<"Print the address of first element or 0th index"<<endl;

    cout<<arr<<endl;            // Print the address of the arr or base address of arr
    cout<<arr+0<<endl;          // Print the address of the arr or base address of arr
    cout<<&arr[0]<<endl;        // Print the address of the arr or base address of arr

    int *ptr = arr;

    cout<<ptr<<endl;          // Print the address of the arr or base address or 0th index address


    // Print the address of second element or 1st index
    cout<<"Print the address of second element or 1st index"<<endl;

    cout<<arr+1<<endl;      // This print the address of 1st index or second element
    cout<<&arr[1]<<endl;    // This also print the address of 1st index or second element


    // Print the value of 0th index

    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr<<endl;

    // Print the addresses of all elements 

    for(int i=0; i<5; i++)
    {
        cout<<arr+i<<endl;
    }

    // Print the all the values of array     

    for(int i=0; i<5; i++)
    {
        cout<<*(arr+i)<<endl;
    }

    

}