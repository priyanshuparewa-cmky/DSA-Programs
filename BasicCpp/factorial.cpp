#include<iostream>
using namespace std;


// ---- By using for_loop ----
// int main(){
//      int fact = 1;
//      int n;

//     cout<<"enter n = ";
//     cin >>n;

//      for(int i=n; i>=1; i--){
//          fact = fact*i;
//      }
//      cout<<"Factorial = "<<fact; 
// }


// ---- By using while_loop ----

int main(){

    int fact = 1;
    int n ;
    int i=1;

    cout<<"Enter the value of n = ";
    cin>>n;

    while(n>=i){
        fact = fact*n;
        n--;
    }
    cout<<fact;
}