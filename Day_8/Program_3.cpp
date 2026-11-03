/*
Program Title : Multiple Inheritance with Parameterized Constructors
Concept Used  : Constructor initializer lists and multiple inheritance

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Shows how a derived class initializes two base classes using a constructor initializer list.

Reference     : Adapted from https://github.com/king-3333333/OOPS_Elective_Programs
*/

#include <iostream>
#include <string>
using namespace std;
class Student { protected: int roll; string name; public: Student(int r,string n):roll(r),name(n){} };
class Test { protected: int marks; public: Test(int m):marks(m){} };
class Result: public Student, public Test { public: Result(int r,string n,int m):Student(r,n),Test(m){} void display(){ cout << "Roll No: " << roll << "\nName: " << name << "\nMarks: " << marks << endl; } };
int main(){ Result r(11,"Rehan",85); r.display(); return 0; }
