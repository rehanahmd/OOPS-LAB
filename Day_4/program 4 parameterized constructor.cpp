/*
---------------------------------------------------------
Program Title : Parameterized Constructor
Concept Used  : Parameterized constructor

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program initializes an object using values passed to a parameterized constructor.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    Employee(int i, int s)
    {
        id = i;
        salary = s;
    }

    void display()
    {
        cout << "Employee ID = " << id << endl;
        cout << "Salary = " << salary << endl;
    }
};

int main()
{
    Employee e(101, 30000);
    e.display();

    return 0;
}
