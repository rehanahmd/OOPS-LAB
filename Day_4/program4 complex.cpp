/*
---------------------------------------------------------
Program Title : Addition of Complex Numbers
Concept Used  : Class, objects and member functions

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program stores real and imaginary parts in objects and adds two complex numbers.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    void setData()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void add(Complex a, Complex b)
    {
        real = a.real + b.real;
        imag = a.imag + b.imag;
    }

    void display()
    {
        cout << "Complex number = " << real << " + j" << imag << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.setData();
    c2.setData();

    c3.add(c1, c2);
    c3.display();

    return 0;
}
