#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_no;
    int balance;

    public:
    Customer(string a, int b, int c)        // parametrized constructor
    {
        name=a;
        account_no=b;
        balance=c;
    }

    // Constructor Overloading
    Customer(string s, int x)
    {
        name=s;
        account_no=200;
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

    Customer C("Sagar",10);
    C.display();


    
}