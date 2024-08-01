#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_no;
    int balance;

    public:

    inline Customer(string s, int a, int b): name(s), account_no(a), balance(b)
    {
        cout<<"Inline Constuctor has called\n";
    }

    void display()
    {
        cout<<name<<" "<<account_no<<" "<<balance<<endl;
    }


};

int main()
{
    Customer c1("Mohit",23,1434);
    c1.display();  
}