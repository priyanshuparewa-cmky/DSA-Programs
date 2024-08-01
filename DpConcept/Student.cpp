#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age, roll_no;
    string grade;
};

int main()
{
    Student S1;
    S1.name="Sagar";
    S1.age = 18;
    S1.roll_no = 53;
    S1.grade = "A+";

    cout<<S1.age;

}