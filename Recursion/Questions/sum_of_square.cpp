// Sum of Square of N natural number:

#include<iostream>
using namespace std;

int sqsum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*n+sqsum(n-1);
}

int main()
{
    int n=4;                // n is always greater than 0
    if(n>=1)
    {
    cout<<sqsum(n);
    }
    else
    cout<<"Sum of Square is not possible";
}