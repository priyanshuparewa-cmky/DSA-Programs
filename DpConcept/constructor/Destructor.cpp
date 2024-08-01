/* Destructor release the memory which is 'Dynamically occupy' the space in memory*/


#include<iostream>
using namespace std;

class Customer
{
    string name;
    int *data;

    public:
    Customer()
    {
        name = "Sagar";
        data = new int;         // dynamically memory allocation

        *data = 10;

        cout<<"Constructor has called\n";
    }
    ~Customer()
    {
        cout<<"Destructor has called\n";
    }
};

int main()
{
    Customer A1;

    Customer *A2 = new Customer;        // here we dynamically create the object of class Customer
    delete A2;
}