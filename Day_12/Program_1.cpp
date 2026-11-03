/*
Program Title : Exception Handling with User-Defined Exception Class
Concept Used  : Custom exception class and constructor

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Checks that inches are below 12 while constructing or entering a distance

Reference     : Adapted from https://github.com/king-3333333/OOPS_Elective_Programs
*/

#include <iostream>
#include <string>
using namespace std;
class InchesException { public: string origin; float value; InchesException(string s,float v):origin(s),value(v){} };
class Distance { int feet; float inches; public: Distance():feet(0),inches(0){} Distance(int f,float i):feet(f),inches(i){ if(i>=12) throw InchesException("two-argument constructor",i); } void getDistance(){ cout << "Enter feet: "; cin >> feet; cout << "Enter inches: "; cin >> inches; if(inches>=12) throw InchesException("getDistance()",inches); } void showDistance(){ cout << feet << " feet, " << inches << " inches\n"; } };
int main(){ try{ Distance d1(17,3.5),d2; d2.getDistance(); cout << "Distance 1: "; d1.showDistance(); cout << "Distance 2: "; d2.showDistance(); } catch(const InchesException& e){ cout << "Initialization error in " << e.origin << endl << "Inches value " << e.value << " is too large." << endl; } return 0; }
