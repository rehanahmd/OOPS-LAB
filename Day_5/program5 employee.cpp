/*
---------------------------------------------------------
Program Title : Employee Record Using Constructors
Concept Used  : Default constructor, parameterized constructor and member function

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program demonstrates two ways of creating an employee object and displaying its details.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Employee
{
    string name;
    string department;
    int id;
    int salary;

public:
    Employee()
    {
        name = "Unknown";
        department = "EC";
        id = 0;
        salary = 0;
    }

    Employee(int i, string n, int s)
    {
        id = i;
        name = n;
        department = "EC";
        salary = s;
    }

    void display()
    {
        cout << "Name       = " << name << endl;
        cout << "Department = " << department << endl;
        cout << "ID         = " << id << endl;
        cout << "Salary     = " << salary << endl;
    }
};

int main()
{
    Employee e1(101, "Rahul", 30000);
    Employee e2;

    cout << "\nEmployee 1" << endl;
    e1.display();

    cout << "\nEmployee 2" << endl;
    e2.display();

    return 0;
}
