#include<iostream>
#include<string>
#include"Student.h"
using namespace std;
void main()
{
	double sd[] = { 56,76.5,45,45,34 };
	Student s;
	s.set(34, 2, "Ahmed", sd);
	s.print();
}