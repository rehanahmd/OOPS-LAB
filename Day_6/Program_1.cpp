/*
Program Title : Class 6 Program 1
Concept Used  : Single-level and multilevel inheritance

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Demonstrates the OOP concept using a simple C++ example.

Reference     : Adapted from https://github.com/king-3333333/OOPS_Elective_Programs
*/

// Single Level inheritance.

#include<iostream>
using namespace std;

class Animal
{
int legs=4;
public:

    void display1()
    {
        cout<<"\nLegs= "<<legs<<endl;
    }
};

class Dog: public Animal
{
    bool tail = true;
public:
    void display2()
    {
        cout<<"\nTail= "<<tail<<endl;
       // cout<<"\nLegs= "<<legs<<endl;
    }
};

int main()
{
    Animal a1;
    Dog d1;
    d1.display1();
    d1.display2();
}
