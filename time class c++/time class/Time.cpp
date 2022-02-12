#include"Time.h"
#include<iostream>
using namespace std;
Time::Time()
{
	hours = minutes = seconds = 0;
}
void Time::normalize() {
	minutes += seconds / 60;
	seconds %= 60;
	hours += minutes / 60;
	minutes %= 60;
	hours %= 24;
}
void Time::advance(int h, int m, int s)
{
	hours += h;	minutes += m;	seconds += s;
	normalize();
}
void Time::reset(int h, int m, int s)
{
	hours = h;	minutes = m;	seconds = s;
	normalize();
}
void Time::print()
{
	cout << hours << ':' << minutes << ':' << seconds << endl;
}