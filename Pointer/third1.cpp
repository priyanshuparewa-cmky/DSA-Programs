#include<iostream>
using namespace std;

int main()
{

    int arr[5]= {2,5,1,7,3};
    
    int *ptr = arr;

    cout<<ptr<<endl; 
    cout<<&arr<<endl;


    // Arithmetic operation on pointer p++, p--, pte=ptr+1

    cout<<"Arithmetic operation _Increment"<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }

    cout<<"Arithmetic operation _Decrement"<<endl;

    ptr=ptr+4;
    cout<<*ptr<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<*ptr<<endl;
        ptr--;
    }
}