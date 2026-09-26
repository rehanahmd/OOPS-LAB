/*
---------------------------------------------------------
Program Title : Default, Parameterized and Copy Constructors
Concept Used  : Constructors and destructor

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program demonstrates default, parameterized and copy constructors using a Rectangle class.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Rectangle
{
    int length, width;

public:
    Rectangle()
    {
        length = 10;
        width = 20;
        cout << "Default constructor" << endl;
    }

    Rectangle(int l, int w)
    {
        length = l;
        width = w;
        cout << "Parameterized constructor" << endl;
    }

    Rectangle(Rectangle &r)
    {
        length = r.length;
        width = r.width;
        cout << "Copy constructor" << endl;
    }

    void display()
    {
        cout << "Length = " << length << endl;
        cout << "Width  = " << width << endl;
    }

    ~Rectangle()
    {
        cout << "Object destroyed" << endl;
    }
};

int main()
{
    int l, w;

    cout << "Enter length and width: ";
    cin >> l >> w;

    Rectangle r1;
    r1.display();

    Rectangle r2(l, w);
    r2.display();

    Rectangle r3(r2);
    r3.display();

    return 0;
}
