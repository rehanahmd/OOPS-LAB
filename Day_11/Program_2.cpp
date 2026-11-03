/*
Program Title : Exception Handling - Zero Input Check
Concept Used  : Throwing and catching an integer exception

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Prevents multiplication when either input number is zero

*/

#include <iostream>
using namespace std;
int main(){ int a,b; cout << "Enter two numbers: "; cin >> a >> b; try{ if(a==0 || b==0) throw 0; cout << "Product = " << a*b << endl; } catch(int){ cout << "Exception caught: Number cannot be zero" << endl; } cout << "After catch" << endl; return 0; }
