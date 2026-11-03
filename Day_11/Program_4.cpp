/*
Program Title : Exception Handling - Throw and Catch
Concept Used  : try, throw and catch statements

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Shows program flow before throwing, inside catch and after catch

*/

#include <iostream>
using namespace std;
int main(){ int x=-1; cout << "Before try\n"; try{ cout << "Inside try\n"; if(x<0) throw x; cout << "After throw (not executed)\n"; } catch(int value){ cout << "Exception caught, x = " << value << endl; } cout << "After catch (executed)\n"; return 0; }
