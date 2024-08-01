#include<iostream>
using namespace std;

bool PrimeNumber(int n=11)  //default Parameterized
{
    if(n<2)
    return 0;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

int Fact(int n=5)   //default Parameterized
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact =fact*i;
        
    }
    return fact;
}

int main()
{
    int a, b;
    cout<<"Enter the 2 numbers = ";
    cin>>a>>b;
    //Prime number of a:
    cout<<PrimeNumber(a)<<endl;
    //Factorial of a:
    cout<<Fact(a)<<endl;
    //Prime number of b:
    cout<<PrimeNumber(b)<<endl;
    //Factorial of b:
    cout<<Fact(b)<<endl;
    //default: 
    cout<<PrimeNumber()<<endl;
    //default:
    cout<<Fact()<<endl;
}