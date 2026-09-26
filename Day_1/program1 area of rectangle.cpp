/*
---------------------------------------------------------
Program Title : Area of a Rectangle
Concept Used  : Basic input, output and arithmetic operation

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program reads the length and breadth of a rectangle and calculates its area.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    int length, breadth;

    cout << "Enter length and breadth: ";
    cin >> length >> breadth;

    cout << "Area of rectangle = " << length * breadth << endl;

    return 0;
}
