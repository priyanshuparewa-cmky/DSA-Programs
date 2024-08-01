#include<iostream>
using namespace std;

int main()
{
    int a=10;
    cout<<&a<<endl;             // print the address of a 
    int *ptr=&a;                // ptr store the address of a 
    cout<<ptr;
    cout<<endl;

    float m=4.5;
    float *ptr1 = &m;
    cout<<ptr1<<endl;

    cout<<sizeof(ptr1);         // this print address of pointer ptr

}