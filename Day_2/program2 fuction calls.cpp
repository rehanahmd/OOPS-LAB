/*
---------------------------------------------------------
Program Title : Function Call Methods
Concept Used  : Pass by value, pass by reference and pass by pointer

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program demonstrates three ways of passing arguments to a function.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

void addValue(int result)
{
    int a = 10, b = 20;
    result = a + b;
    cout << "Pass by value    : " << result << endl;
}

void addReference(int &result)
{
    int a = 10, b = 20;
    result = a + b;
    cout << "Pass by reference: " << result << endl;
}

void addPointer(int *result)
{
    int a = 10, b = 20;
    *result = a + b;
    cout << "Pass by pointer  : " << *result << endl;
}

int main()
{
    int answer = 0;

    addValue(answer);
    addReference(answer);
    addPointer(&answer);

    return 0;
}
