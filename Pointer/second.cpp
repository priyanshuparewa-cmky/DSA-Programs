#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *ptr=&a;

    cout<<ptr<<endl;        // Print address of a 
    cout<<*ptr<<endl;       // Print the value inside a


    int b=20;
    ptr=&b;

    cout<<ptr<<endl;               // Print address of b
    cout<<*ptr<<endl;             //  Print the value inside b

    b=30;
    cout<<*ptr;             // Here the b value is updated so 30 is given in the output
}