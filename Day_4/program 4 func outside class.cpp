/*
---------------------------------------------------------
Program Title : Function Defined Outside the Class
Concept Used  : Class and scope resolution operator

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program demonstrates how a member function can be declared inside a class and defined outside it.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;

public:
    void setData();
    void display();
};

void Student::setData()
{
    cout << "Enter name and age: ";
    cin >> name >> age;
}

void Student::display()
{
    cout << "Name = " << name << endl;
    cout << "Age  = " << age << endl;
}

int main()
{
    Student s;

    s.setData();
    s.display();

    return 0;
}
