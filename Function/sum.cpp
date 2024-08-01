#include<iostream>
using namespace std;

int sum(int m, int n)
{
    int ans = m + n;
    return ans;
}

int mul(int a, int b)
{
    int ans = a * b;
    return ans;
}

int main(){
    int a,b;
    cout <<"Enter the two number = ";
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    cout<<mul(a,b);
}