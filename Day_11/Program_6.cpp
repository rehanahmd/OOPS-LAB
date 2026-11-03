/*
Program Title : Operator Overloading - String Concatenation
Concept Used  : Overloading the binary plus operator

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Combines two user-defined String objects using the + operator

Reference     : Adapted from https://github.com/king-3333333/OOPS_Elective_Programs
*/

#include <iostream>
#include <string>
using namespace std;
class Text { public: string value; Text(string s):value(s){} Text operator+(const Text& other) const { return Text(value+other.value); } };
int main(){ Text first("Hello "), second("World"); Text result=first+second; cout << "Concatenated: " << result.value << endl; return 0; }
