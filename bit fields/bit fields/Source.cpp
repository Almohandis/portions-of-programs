#include<iostream>
using namespace std;
class bit
{
public:
	bit()
	{
		for (int i = 0; i < 7; i++)
			a[i] = 0;
	}
	unsigned a0 : 1, a1 : 1, a2 : 1, a3 : 1, a4 : 1, a5 : 1, a6 : 1;
	unsigned a[7] = { a0,a1,a2,a3,a4,a5,a6 };
};
void main()
{

	bit b[11];
	cout << sizeof(b[0]);
	for (int i = 0; i < 11; i++)
	{
		cout << endl;
		for (int j = 0; j < 7; j++)
		{
			if ((i==5))
				cout <<b[i].a[j];
			else
			{
				if (j == 0 || j == 6)
					cout << b[i].a[j];
				else
					cout << " ";
			}
		}
	}
	cout << endl << endl;
}