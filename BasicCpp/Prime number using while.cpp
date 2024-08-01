// Program to check a given number is prime or not ||

#include<iostream>
using namespace std;

int main(){

    int n; 
    cout<<"Enter the number = ";
    cin>>n;
    int i=2;

    if(n < 2){
        cout<<"Not a prime number :";
    } else {

        while(i<n){

            if(n%i==0){
                cout<<"Not prime number";
                return 0;
            }    i++;
        } 
        cout<<"Prime Number : ";
    }
}