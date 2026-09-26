/*
---------------------------------------------------------
Program Title : Adding Values of Objects
Concept Used  : Class, objects and member functions

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program demonstrates using objects to store values and perform an addition operation.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    void setValue(int v)
    {
        value = v;
    }

    int getValue()
    {
        return value;
    }
};

int main()
{
    Number n1, n2;

    n1.setValue(10);
    n2.setValue(20);

    cout << "Sum = " << n1.getValue() + n2.getValue() << endl;

    return 0;
}
