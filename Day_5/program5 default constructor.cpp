/*
---------------------------------------------------------
Program Title : Assign Mileage to a Car
Concept Used  : Default constructor and destructor

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program uses a constructor to initialize the mileage of Car objects.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Car
{
    float mileage;

public:
    Car()
    {
        cout << "Enter mileage: ";
        cin >> mileage;
    }

    void display()
    {
        cout << "Mileage = " << mileage << endl;
    }

    ~Car()
    {
        cout << "Car object destroyed" << endl;
    }
};

int main()
{
    Car c1, c2;

    c1.display();
    c2.display();

    return 0;
}
