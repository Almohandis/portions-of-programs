#include<iostream>
#include"Complex.h"
using namespace std;
void main()
{
	Complex c1(4, 3), c2(5, 1), c3(0, 0);
	c3.addition(c1, c2);
	c3.display();

}