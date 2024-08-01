#include<iostream>
using namespace std;

int main()
{

    int arr[5]= {2,5,1,7,3};
    
    int *ptr = arr;

    cout<<ptr<<endl; 

    // Addition
    cout<<"Addition"<<endl;

    ptr=ptr+3;
    cout<<*ptr<<endl;

    ptr=ptr-2;
    cout<<*ptr;
}