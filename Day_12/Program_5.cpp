/*
Program Title : Voting Eligibility Using Exception Handling
Concept Used  : Throwing and catching an age value

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Checks the minimum voting age and displays voter details if eligible

Reference     : Adapted from https://github.com/king-3333333/OOPS_Elective_Programs
*/

#include <iostream>
#include <string>
using namespace std;
int main(){ int age; string name,address; cout << "Enter age: "; cin >> age; try{ if(age<18) throw age; cout << "Enter name: "; cin >> name; cout << "Enter address: "; cin >> address; cout << "Eligible for voting\nName: " << name << "\nAddress: " << address << endl; } catch(int value){ cout << "Not eligible for voting. Age = " << value << endl; } return 0; }
