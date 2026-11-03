/*
Program Title : Nested Try Block
Concept Used  : Nested exception handling and rethrowing

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Catches an exception in an inner block and rethrows it to the outer handler


*/

#include <iostream>
using namespace std;
int main(){ try{ try{ throw 30; } catch(int n){ cout << "n = " << n << " handled partially\n"; throw; } } catch(int n){ cout << "n = " << n << " handled completely\n"; } return 0; }
