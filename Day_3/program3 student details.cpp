/*
---------------------------------------------------------
Program Title : Student Details Using Class and Object
Concept Used  : Class, object and member functions

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program creates Student objects and displays their name and age.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;

public:
    void setData()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    void display()
    {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    Student s1, s2;

    s1.setData();
    s2.setData();

    s1.display();
    s2.display();

    return 0;
}
