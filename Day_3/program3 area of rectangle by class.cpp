/*
---------------------------------------------------------
Program Title : Area of Rectangle Using a Class
Concept Used  : Class, object, member functions and this pointer

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program uses a Rectangle class to store dimensions and calculate the area.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Rectangle
{
    int width;
    int height;
    int area;

public:
    void setData(int width, int height)
    {
        this->width = width;
        this->height = height;
        area = width * height;
    }

    void displayArea()
    {
        cout << "Area = " << area << endl;
    }
};

int main()
{
    Rectangle r;
    int width, height;

    cout << "Enter width and height: ";
    cin >> width >> height;

    r.setData(width, height);
    r.displayArea();

    return 0;
}
