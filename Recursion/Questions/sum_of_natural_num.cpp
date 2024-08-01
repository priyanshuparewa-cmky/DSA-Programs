// Sum of first N natural number

#include<iostream>
using namespace std;

int sum(int N)
{
    if(N==1)
    {
        return 1;
    }
    return N+sum(N-1);
}

int main()
{
    int n=5;

    cout<<sum(n);
}