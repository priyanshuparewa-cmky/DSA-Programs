#include<iostream>
using namespace std;

int fact(int N)
{
    if(N==1 || N==0 )       // Base case
    {
        return 1;
    }
    return N*fact(N-1);
}

int main()
{
    int n;              // if you input the larger value so integer can not handle it 
    cin>>n;             // so you can solve it by String
    if(n<0)
    {
        cout<<"Factorial is not passible";
    }

    cout<<fact(n);
}