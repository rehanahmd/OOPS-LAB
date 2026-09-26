/*
---------------------------------------------------------
Program Title : Time Using a Class
Concept Used  : Class, objects and member functions

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program stores hours, minutes and seconds in a Time object and displays them.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;

public:
    void setTime(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void display()
    {
        cout << "Time = " << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main()
{
    Time t;
    int h, m, s;

    cout << "Enter hours, minutes and seconds: ";
    cin >> h >> m >> s;

    t.setTime(h, m, s);
    t.display();

    return 0;
}
