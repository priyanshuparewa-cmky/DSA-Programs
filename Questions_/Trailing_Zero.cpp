#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int count = 0;

    while(n>=5){
        count = count + n/5;
        n = n/5;
    }
    cout<<count;
    return 0;
}

