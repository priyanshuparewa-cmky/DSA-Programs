#include<iostream>
using namespace std;

int cube(int &n)
{
     int ans = n*n*n;
     return ans;
    
}

int main(){
    int num;
    cout<<"Enter the number = ";
    cin>>num;
    cout<<cube(num);
}