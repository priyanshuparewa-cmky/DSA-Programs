// Decimal number converts into octal number

#include <iostream>
using namespace std;

int main(){
     int num;
     cout<<"Enter the number = ";
     cin>>num;

     int rem, ans=0, mul=1;

     while(num>0){
        rem = num % 8;
        num = num / 8;
        ans = mul * rem + ans;
        mul = mul * 10;
     }
     cout<<ans<<endl;
}








