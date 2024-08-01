#include<iostream>
using namespace std;

class Student
{   
    public:
    string name;
    int age;
    int roll_no;
    string grade;
};

int main()
{
    Student *S = new Student;

    (*S). name = "Sagar";
    (*S). age = 20;
    (*S). roll_no = 53;
    (*S). grade = "A+";

    cout<< S->name<<" ";
    cout<< S->age<<" ";
    cout<< S->roll_no<<" ";
    cout<< S->grade<<" ";
    
}