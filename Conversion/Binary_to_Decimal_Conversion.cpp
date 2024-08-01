// Binary number converts into Decimal number :

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number = ";
    cin>>num;
    int ans=0,rem,mul=1;

    while(num){

        rem = num % 10;
        num = num / 10;
        ans = mul * rem + ans;
        mul = mul * 2;
    }
    cout<<ans;
    return 0;
} 