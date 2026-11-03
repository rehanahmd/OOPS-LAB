/*
Program Title : Class 9 Program 1
Concept Used  : Multiple inheritance

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Demonstrates the OOP concept using a simple C++ example.

Reference     : Adapted from https://github.com/king-3333333/OOPS_Elective_Programs
*/

// write a C++ program to implement multiple-inheritance for the given scenerio.
//
#include<iostream>
using namespace std;

class Liquid
{
    int volume;
public:
    void display1()
    {
        cout<<"Liquid"<<endl;
    }
};

class Fuel
{
    string type;
public:
    void display2()
    {
        cout<<"Fuel"<<endl;
    }
};

class Petrol:public Liquid,public Fuel
{
    string fuel_type;
public:
    void display3()
    {
        cout<<"Petrol"<<endl;
    }
};
int main()
{
    Liquid l1;
    Fuel f1;
    Petrol p1;
    l1.display1();
    f1.display2();
    p1.display3();
    p1.display2();
    p1.display1();

    return 0;
}
