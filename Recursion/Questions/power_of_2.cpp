// Power of 2, N

// This code is valid for all the number of num not only for 2

#include<iostream>
using namespace std;

int power(int num, int n)       // num = 2,3,4,5......n
{   
    if(n==0)
    {
        return 1;               // by using this if we remove the base condition, then 
    }                           // still code run correctly, if want to know the reason dryrun from the base or look the previous questions solution.


    if(n==1)        // Base case
    {
        return num;
    }
    return num*power(num, n-1);
}

int main()
{
    int n=3;
    
    cout<<power(3,n);
}