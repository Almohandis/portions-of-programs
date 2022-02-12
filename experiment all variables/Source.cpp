#include<iostream>
#include<stdio.h>
using namespace std;

enum color{red , green=34,blue};
int int_fun(int *a)
{
	for (int i = 0; i < 1; i++)
		cout << *(a+i) << endl;
	cout << *(a ) << endl;
	cout << *(a + 2) << endl;
	cout << *(a + 3) << endl;
	cout << *(a + 4) << endl;
	cout << *(a + 5) << endl;


	
	return red;
}
//char chFn(char& c)
//{
//	return 0x65fcfb;
//}
int main()
{
	int e = 5;
	cout << e << e++ << endl;
	cin >> e;
	int rr = 11;
	int m;
	cout << ++rr << rr++ << endl;;
	//cout << rr++ << rr << endl;
	m = rr++ + ++rr + ++rr;
	cout << rr << endl;
	
	cout << m << endl;
	int ar[5] = { 1,2,3,4,5 };
	int x = int_fun(&ar[0]);

	//int section
	/*cout << hex;
	bool check = 5;
	cout << bool(check) << endl;
	int int_x;
	unsigned int uint_x;
	int_x = int_fun(int_x);
	cout << (bool)int_x << endl;*/

	//char section
	/*char c;
	unsigned char cc;
	cc = chFn(c);
	cout << cc << endl;
	cc = 0x6f;
	cout << cc << endl;*/



	return 0;
}