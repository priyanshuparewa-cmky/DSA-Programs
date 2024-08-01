/* Here 'this->' is a pointer used to pointing the actual class variable if we do not use 'this->' pointer
   then it access the value which is most nearer to it*/

#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_no;
    int balance;

    public:
    Customer()              // default constructor
    {
        name="Sohit";
        account_no=499;
        balance=500;
    }

    Customer(string name, int account_no, int balance)          // parametrized constructor
    {
        this->name=name;
        this->account_no=account_no;
        this->balance=balance;
    }

    void display()
    {
        cout<<name<<" "<<account_no<<" "<<balance<<endl;
    }

};

int main()
{
    Customer c1;
    c1.display();

    Customer c2("Raj",12,232);
    c2.display();
    
}