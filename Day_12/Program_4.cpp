/*
Program Title : Exception Calculator
Concept Used  : Exception handling for division by zero

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Performs arithmetic operations and handles a zero divisor


*/

#include <iostream>
using namespace std;
int main(){ int a,b; cout << "Enter two numbers: "; cin >> a >> b; try{ if(b==0) throw b; cout << "Addition = " << a+b << endl << "Subtraction = " << a-b << endl << "Multiplication = " << a*b << endl << "Division = " << static_cast<float>(a)/b << endl; } catch(int){ cout << "Division by zero is not allowed" << endl; cout << "Addition = " << a+b << endl << "Subtraction = " << a-b << endl << "Multiplication = " << a*b << endl; } return 0; }
