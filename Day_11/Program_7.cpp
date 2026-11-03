/*
Program Title : Virtual Function
Concept Used  : Runtime polymorphism and function overriding

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Calls the derived class function through a base class pointer


*/

#include <iostream>
using namespace std;
class Animal { public: virtual void sound(){ cout << "Animal makes a sound" << endl; } };
class Dog: public Animal { public: void sound() override { cout << "Dog barks" << endl; } };
int main(){ Dog dog; Animal* ptr=&dog; ptr->sound(); return 0; }
