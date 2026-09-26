/*
---------------------------------------------------------
Program Title : Find the Length of a String
Concept Used  : Character array, strlen() and string length

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program demonstrates two simple ways of finding the length of text.
---------------------------------------------------------
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char text[] = "Hello";
    string word = "World";

    cout << "Length of character array = " << strlen(text) << endl;
    cout << "Length of string = " << word.length() << endl;

    return 0;
}
