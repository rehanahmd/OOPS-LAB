/*
Program Title : Diamond Inheritance Ambiguity
Concept Used  : Diamond inheritance and virtual functions

Name          : Baba Rehan Ahmed
SRN           : 01FE24BEC411
Roll No       : 11
Division      : A
Semester      : 7th

Description   : Demonstrates the diamond inheritance problem and resolves member ambiguity using the base-class path.

*/

#include <iostream>
using namespace std;
class A { public: int value; };
class B: public A { public: int j; };
class C: public A { public: int k; };
class D: public B, public C { public: int sum; };
int main(){ D obj; obj.B::value=10; obj.C::value=20; obj.j=30; obj.k=40; obj.sum=obj.B::value+obj.j+obj.k; cout << "Value through B: " << obj.B::value << endl; cout << "Value through C: " << obj.C::value << endl; cout << "Sum: " << obj.sum << endl; return 0; }
