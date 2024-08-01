#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number =";
    cin>>num;
    int rem, ans=0, mul=1;

    for(int number=num; num>0; number/=2){
        rem = number % 2;
        ans = rem * mul + ans;
        mul *= 10;
    }
    cout<<ans;
}