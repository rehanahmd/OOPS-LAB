/*
Program Title : Class 10 Program 3
Concept Used  : Diamond inheritance and virtual functions

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Demonstrates the OOP concept using a simple C++ example.


// Function overriding in inheritance using virtual keyword. (Runtime polymorphism / Late Binding)

#include<iostream>
using namespace std;

class Base{
public:
     virtual void show(){
    cout<<"Base"<<endl;
    }
};

class Derv1: public Base{
public:
    void show()
    {
        cout<<"Derv1\n";
    }
};

class Derv2:public Base
{
public:
    void  show(){
    cout<<"Derv2\n";}
};

int main()
{
    Derv1 dv1;
    Derv2 dv2;
    Base* ptr;
     ptr=&dv1;
     ptr->show();
     ptr=&dv2;
     ptr->show();
}
