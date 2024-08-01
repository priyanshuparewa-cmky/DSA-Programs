#include <iostream>
using namespace std;


int Reverse_a_number(int num)   //Pass By Value
{
    if(num<0 || num>5000)
    return 0;

    int ans=0, rem;
    while(num)
    {
        rem = num%10;
        num = num/10;
        ans = ans*10+rem;
    }
    return ans;
}

int main(){

int n;
cout<<"Enter the number = ";
cin>>n;
cout<<Reverse_a_number(n)<<endl;
}




