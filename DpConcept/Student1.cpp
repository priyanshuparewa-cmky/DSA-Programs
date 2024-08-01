#include<iostream>
using namespace std;

class Student1
{   
    // public:
    string name;
    int age, roll_no;
    string grade;

    // Function greater and setter

    public:

    void setname(string s)
    {
        name=s;
    }

    void setage(int a)
    {
        age=a;
    }

    void setroll_num(int r)
    {
        roll_no=r;
    }

    void setgrade(string g)
    {
        grade=g;
    }

    void getname()
    {
        cout<<name<<endl;
    }

    void getage()
    {
        cout<<age<<endl;
    }

    int getroll_no()
    {
        return roll_no;
    }
};

int main()
{
    Student1 S1;
    // S1.name="Sagar";
    // S1.age = 18;
    // S1.roll_no = 53;
    // S1.grade = "A+";

    S1.setname("Sagar");
    S1.setage(20);
    S1.setroll_num(53);
    S1.setgrade("A+");

    S1.getname();
    S1.getage();
    cout<<S1.getroll_no();


}