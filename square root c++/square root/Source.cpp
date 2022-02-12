#include<iostream>
#include<fstream>

//#include<math.h>
using namespace std;
void main()
{
	ofstream file("digits.txt", ios::app);
	int  quotientDigit = 0, totalQoutient, tempQuotient = 1, i = 1;
	unsigned long long int dividend, divisor;
	bool zeroQuotient = true;
	cout << "Please enter dividend: ";
	cin >> dividend;
	while (dividend < 1)
	{
		cout << "Please enter number >=1 :  ";
		cin >> dividend;
	}
	while (pow(tempQuotient, 2) <= dividend)
	{
		zeroQuotient = false;
		quotientDigit++;
		tempQuotient++;
	}
	divisor = quotientDigit*2;
	dividend -= pow(quotientDigit, 2);
	dividend *= 100;
	file << quotientDigit << '.';
	while (i!=16 && dividend!=0)
	{
		zeroQuotient = true;
		quotientDigit = 0;
		tempQuotient = 1;
		while (((divisor*10)+tempQuotient)*tempQuotient <= dividend)
		{
			zeroQuotient = false;
			quotientDigit++;
			tempQuotient++;
		}
		file << quotientDigit;
		dividend -= ((divisor * 10) + quotientDigit) * quotientDigit;
		dividend *= 100;
		if (zeroQuotient)
			divisor = divisor * 10;
		else
			divisor = ((divisor * 10) + (quotientDigit * 2));
		i++;
	}
}