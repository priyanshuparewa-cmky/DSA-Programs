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

    Customer(string name, int account_no, int balance)          // parametrized constructor
    {
        this->name=name;
        this->account_no=account_no;
        this->balance=balance;
    }

    Customer(Customer &B)           // Copy Constructor  Here B and A2 pointing the same class variables:
    {
        name = B.name;
        account_no = B.account_no;
        balance = B.balance;

    }

    void display()
    {
        cout<<name<<" "<<account_no<<" "<<balance<<endl;
    }

};

int main()
{
    Customer A1("Rohit", 23, 124);
    A1.display();

    Customer A2(A1);        // Copy constructor   Here we copy the value of A1 to A2
    A2.display();        

    A2 = A1;                // another way to use the copy constructor by using assignment'=' operator:
    A2.display();
    
}