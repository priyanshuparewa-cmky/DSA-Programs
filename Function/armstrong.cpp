#include<iostream>
#include<cmath>     // this header file is used in pow function to calculate the power of number.
using namespace std;

int countdigit(int n){

    int count = 0;

    while(n){
        count++;
        n/=10;        
    }
    return count;
}

bool Armstrong(int a, int b){

    int n=a, ans=0, rem;

    while(n){
        rem = n%10;
        n = n/10;
        ans = ans+pow(rem,b);    
    }
        if(ans == a)
        return 1;
        else
        return 0;
}

int main(){

    int num;
    cin>>num;

    int digit = countdigit(num);

    cout<<Armstrong(num, digit);
}