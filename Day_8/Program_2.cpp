/*
Program Title : Multilevel Inheritance Using Constructor Initializer Lists
Concept Used  : Constructor initializer lists and multiple inheritance

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Initializes data members of base and derived classes using constructor initializer lists.

Reference     : Adapted from https://github.com/king-3333333/OOPS_Elective_Programs
*/

#include <iostream>
#include <string>
using namespace std;
class Person { protected: string name; public: Person(string n): name(n) {} void showPerson(){ cout << "Name: " << name << endl; } };
class Student : public Person { protected: int roll; public: Student(string n,int r): Person(n),roll(r) {} void showStudent(){ showPerson(); cout << "Roll No: " << roll << endl; } };
class ITStudent : public Student { float cgpa; public: ITStudent(string n,int r,float c): Student(n,r),cgpa(c) {} void display(){ showStudent(); cout << "CGPA: " << cgpa << endl; } };
int main(){ ITStudent s("Rehan",11,9.2); s.display(); return 0; }
