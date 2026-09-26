/*
---------------------------------------------------------
Program Title : Employee Details Using Constructor
Concept Used  : Class, default constructor and member function

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program initializes employee information through a constructor and displays the details.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Employee
{
    int id;
    string department;

public:
    Employee()
    {
        cout << "Enter employee ID and department: ";
        cin >> id >> department;
    }

    void display()
    {
        cout << "Employee ID = " << id << endl;
        cout << "Department  = " << department << endl;
    }
};

int main()
{
    Employee e1, e2;

    e1.display();
    e2.display();

    return 0;
}
