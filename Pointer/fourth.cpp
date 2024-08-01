#include<iostream>
using namespace std;

int main()
{
    int n=10;
    int *p=&n;              // single pointer
    cout<<p<<endl;
    cout<<&n<<endl;

    int **p1=&p;            // Double pointer
    cout<<p1<<endl;
    cout<<&p<<endl;

    int ***p2=&p1;          // Triple pointer
    cout<<p2<<endl;
    cout<<&p1<<endl;
    
    ***p2 = ***p2 + 5;
    cout<<n;
}