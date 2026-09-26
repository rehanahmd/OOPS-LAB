/*
---------------------------------------------------------
Program Title : Find the Biggest Number in an Array
Concept Used  : Array and function

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description:
This program uses a function to find the largest element present in an integer array.
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

int findBiggest(int a[], int n)
{
    int biggest = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > biggest)
            biggest = a[i];
    }

    return biggest;
}

int main()
{
    int a[50], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Biggest element = " << findBiggest(a, n) << endl;

    return 0;
}
