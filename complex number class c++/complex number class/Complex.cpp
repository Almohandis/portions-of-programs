#include<iostream>
#include"Complex.h"
#include<cmath>
using namespace std;
Complex::Complex(float x, float y)
{
	real = x;
	imaginary = y;
}
double Complex::phase()
{
	return (atan(imaginary / real));
}
double Complex::absolute()
{
	return (sqrt(imaginary * imaginary + real * real));
}
void Complex::addition(Complex a, Complex b)
{
	imaginary = a.imaginary + b.imaginary;
	real = a.real + b.real;
}
void Complex::multiplication(Complex a, Complex b)
{
	real = a.real * b.real + a.imaginary * b.imaginary;
	imaginary = a.real * b.imaginary + a.imaginary * b.real;
}
void Complex::display()
{
	cout << "Real part is " << real << endl;
	cout << "Imaginary part is " << imaginary << endl;
}