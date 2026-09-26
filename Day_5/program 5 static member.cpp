/*
---------------------------------------------------------
Program Title : Static Data Member
Concept Used  : Static data member

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program demonstrates that a static data member is shared by all objects of a class.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Student
{
    static int count;

public:
    void showCount()
    {
        count++;
        cout << "Number of objects = " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1, s2, s3;

    s1.showCount();
    s2.showCount();
    s3.showCount();

    return 0;
}
