#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_no;
    int balance;

    public:
    // Customer(){         // Default Constructor
    //     cout<<"Constructor has called:";
    // }

    Customer()                  // default constructor
    {       
        cout<<"Constructor has called:\n";
        name="Rohit";
        account_no=4355709;
        balance=100;
    }

    void display()
    {
        cout<<name<<" "<<account_no<<" "<<balance;
    }

};

int main()
{
    Customer c1;
    c1.display();
}