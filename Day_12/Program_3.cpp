/*
Program Title : Exception Handling with Integer and Double
Concept Used  : Typed catch blocks and catch-all handler

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Demonstrates catching different exception types and a general handler

*/

#include <iostream>
using namespace std;
int main(){ try{ int age=15; if(age>=18) cout << "Access granted - you are old enough."; else throw age; } catch(double value){ cout << "Age = " << value << endl; } catch(...){ cout << "Access denied - you must be at least 18 years old." << endl; } return 0; }
