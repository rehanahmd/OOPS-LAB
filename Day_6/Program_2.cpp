/*
Program Title : Class 6 Program 2
Concept Used  : Single-level and multilevel inheritance

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Demonstrates the OOP concept using a simple C++ example.

Reference     : Adapted from https://github.com/king-3333333/OOPS_Elective_Programs
*/

// Multi-level Inheritance
#include<iostream>
using namespace std;

class Person
{
public:
    void display1()
    {
        cout<<"Person Class"<<endl;
    }
};

class Student:public Person
{
public:
    void display2()
    {
        cout<<"Student Class"<<endl;
    }
};

class IT_Student:public Student
{
public:
    void display3()
    {
        cout<<"IT_Student Class"<<endl;
    }
};

int main()
{
Person p;
Student s;
IT_Student i;
p.display1();
cout<<endl;
s.display2();
s.display1();
cout<<endl;
i.display3();
i.display2();
i.display1();

return 0;
}
