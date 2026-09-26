/*
---------------------------------------------------------
Program Title : Display Student Marks
Concept Used  : Class, private data members and member functions

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program stores marks and CGPA inside a class and displays them using member functions.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Student
{
    int marks;
    float cgpa;

public:
    void setData()
    {
        marks = 300;
        cgpa = 9.20;
    }

    void displayData()
    {
        cout << "Marks = " << marks << endl;
        cout << "CGPA  = " << cgpa << endl;
    }
};

int main()
{
    Student s;

    s.setData();
    s.displayData();

    return 0;
}
