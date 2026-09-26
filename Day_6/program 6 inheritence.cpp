/*
---------------------------------------------------------
Program Title : Multilevel Inheritance Using Vehicle, Car and SportsCar
Concept Used  : Multilevel inheritance and constructor inheritance

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program demonstrates a three-level inheritance chain where SportsCar inherits from Car and Car inherits from Vehicle.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string color;
    float mileage;

public:
    Vehicle(string c, float m)
    {
        color = c;
        mileage = m;
    }

    void displayVehicle()
    {
        cout << "Color   = " << color << endl;
        cout << "Mileage = " << mileage << endl;
    }
};

class Car : public Vehicle
{
protected:
    int doors;
    string fuel;

public:
    Car(string f, string c, float m) : Vehicle(c, m)
    {
        fuel = f;
        doors = 4;
    }

    void displayCar()
    {
        cout << "Fuel type = " << fuel << endl;
        cout << "Doors     = " << doors << endl;
    }
};

class SportsCar : public Car
{
    string turbo;
    int maxSpeed;

public:
    SportsCar(string t, string f, string c, float m)
        : Car(f, c, m)
    {
        turbo = t;
        maxSpeed = 250;
        doors = 2;
    }

    void displaySportsCar()
    {
        cout << "Turbo     = " << turbo << endl;
        cout << "Max speed = " << maxSpeed << " km/h" << endl;
    }
};

int main()
{
    SportsCar car("Yes", "Petrol", "Red", 15.5);

    cout << "Vehicle Details" << endl;
    car.displayVehicle();

    cout << "\nCar Details" << endl;
    car.displayCar();

    cout << "\nSports Car Details" << endl;
    car.displaySportsCar();

    return 0;
}
