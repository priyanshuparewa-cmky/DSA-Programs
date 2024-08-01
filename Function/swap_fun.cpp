#include<iostream>
using namespace std;

// void swap(int a, int b) // Pass By Value
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }

void swap(int &a, int &b) // Pass By Reference
{
    int c;
    c=a;
    a=b;
    b=c;
}

void swap(float &m, float &n){  // Function Overloading
    float o ;
    o=m;
    m=n;
    n=o;
}

int main(){
    int a,b;
    cout<<"Enter the 2 number = "<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    float f1=4.8, f2=3.6;
    swap(f1, f2);
    cout<<f1<<" "<<f2;
}