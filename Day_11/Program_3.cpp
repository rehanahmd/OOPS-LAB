/*
Program Title : Exception Handling - Zero Product
Concept Used  : Checking a calculated result with an exception

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Throws an exception when the product of two numbers is zero

*/

#include <iostream>
using namespace std;
int main(){ int a,b; cout << "Enter two numbers: "; cin >> a >> b; try{ int product=a*b; if(product==0) throw product; cout << "Product = " << product << endl; } catch(int){ cout << "Exception caught: Product is zero" << endl; } cout << "After catch (program executed)" << endl; return 0; }
