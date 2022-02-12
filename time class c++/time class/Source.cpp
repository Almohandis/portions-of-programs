#include<iostream>
#include"Time.h"
using namespace std;
void main()
{
	Time t;
	t.reset(45, 68, 23);
	t.print();
	t.advance(5, 2, 14);
	t.print();
}