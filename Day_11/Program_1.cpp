/*
Program Title : Exception Handling - Division by Zero
Concept Used  : Throwing and catching a string exception

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Handles division by zero using a thrown error message

*/

#include <iostream>
using namespace std;
double divide(int a,int b){ if(b==0) throw "Division by zero condition!"; return static_cast<double>(a)/b; }
int main(){ int a=50,b=0; try{ cout << divide(a,b) << endl; } catch(const char* msg){ cout << msg << endl; } return 0; }
