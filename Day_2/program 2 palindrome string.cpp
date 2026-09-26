/*
---------------------------------------------------------
Program Title : Check Whether a String is a Palindrome
Concept Used  : Character array, string comparison and loop

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program checks whether the characters of a string read the same from both ends.
---------------------------------------------------------
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[] = "level";
    int left = 0;
    int right = strlen(word) - 1;
    bool palindrome = true;

    while (left < right)
    {
        if (word[left] != word[right])
        {
            palindrome = false;
            break;
        }

        left++;
        right--;
    }

    if (palindrome)
        cout << word << " is a palindrome." << endl;
    else
        cout << word << " is not a palindrome." << endl;

    return 0;
}
