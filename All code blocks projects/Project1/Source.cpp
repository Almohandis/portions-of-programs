#include<string>
#include<cstring>
#include<string.h>
#include<iostream>
#include<Windows.h>
#include<iomanip>
using namespace std;
const int q = 0;
struct bit
{
private:
	int x;
public:
	bit(int ee,int e);
};
bit::bit(int ee,int r)
{
	x = ee;
	cout << x << endl;
}
void gg()
{
	cout << 5 << endl;
}
struct early { int i; void f() { cout << 1 << endl; } };
struct late { int i; virtual void f() = 0; virtual void m() { cout << "late" << endl; } };
struct early1 :early { void f() { cout << 11 << endl; } };
struct late1 :late { void f() { cout << 21 << endl; } };
struct late2 :late { void f() { cout << 23 << endl; }void m() { cout << 222 << endl; } };

struct a { int aa; static float i; a() { i++; } };
struct b : virtual a { int bb; };
struct c :virtual a { int cc; };
struct d :b, c { int dd; };
struct e : virtual c, virtual b {};
float a::i = 0;
enum boe { le, o };
class bb {
public:
	signed b1 : 2;
	unsigned b3 : 3;
};
class apple {
protected:
	int x;
public:
	apple(int xx)
	{
		cout << 1 << endl;
		x = xx;
		cout << xx;
	}
};
class Rapple : public apple
{
public:
	Rapple(int yy, int r) :apple(r)
	{
		cout << 2 << endl;
		x = r;
		cout << x;
	}
};
//class BRapple : apple
//{
//public:
//	BRapple():apple(4)
//	{
//		cout << 3 << endl;
//	}
//};

class ahmed
{
public:
	int x;
};
class amjad
{
public:
	int y=5;
};
class department
{
public:
	char flag;
	union
	{
		ahmed ah;
		amjad am;
	}uni;
};
unsigned char arr[2] = {0};
void WriteBitToSensor(bool b)
{
	static int i = 0; int j = 0;
	if (1)
	{
		arr[i] <<= 1;
		arr[i] |= b;	j++;
		if (j == 8)
		{
			if (arr[i] > 32)
				cout << "High\n";
			j = 0;
			i++;
		}
		if (i == 2)
		{
			cout << arr[0] << '\t' << arr[1] << endl;
			i = 0;
		}
	}
}

bool ReadBitFromSensor()
{
	bool bit;
	int i = 0;
	while (i<8)
	{
		cin >> bit;		i++;
		WriteBitToSensor(bit);
		Sleep(1000);
	}
	return 0;
}
class any
{
public:
	any(int xx=4)
	{
		x = xx;
		cout << 666 << endl;
	}
	int x;
	friend any operator-(any& a, any& b)
	{
		any c = -b;
		c = c + a;
		return any(c.x);
	}
	friend any operator-(any& a)
	{
		a.x = -a.x;
		return any(a.x);
	}
	friend any operator+(any& a, any& b)
	{
		return any(a.x + b.x);
	}
};

/////Date class

class Date {
	static unsigned int iio ;
	int day, month, year;
public:
	Date() {
		day = 31;
		month = 12;
		year = 2020;
	}
	void setDay(int d) { day = d; }
	void setMonth(int m) { month = m; }
	void setYear(int y) { year = y; }

	int getDay() { return day; }
	int getMonth() { return month; }
	int getYear() { return year; }

	void displayDate() { cout << day << "/" << month << "/" << year << endl; }

	void operator +=(int x) {
		if ((day + x) > 31) {
			day = 31 - (day + x);
			if (month == 12) {
				month = 1;
				year++;
			}
			month++;
		}
		else day += x;
	}

	void operator ++() {
		if ((day + 1) > 30) {
			day = (day + 1) - 30;
			if (month == 12) {
				month = 1;
				year++;
			}
			else month++;
		}
		day++;
		if (month == 12) {
			month = 1;
			year++;
		}
		else month++;
		year++;
	}

	Date operator+(Date x) {
		Date y;
		if ((day + x.day) > 30) {
			day = (day + x.day) - 30;
			if (month == 12) {
				month = 1;
				year++;
			}
			month++;
		}
		else day += x.day;
		if (month + x.month > 12) {
			month = (month + x.month) - 12;
			year++;
		}
		else month++;
		year += x.year;
		y.day = day;
		y.month = month;
		y.year = year;
		return y;
	}
};

//int main() {
//	Date one, two;
//	one.setDay(27);
//	one.setMonth(12);
//	one.setYear(2019);
//	two.setDay(18);
//	two.setMonth(5);
//	two.setYear(2000);
//
//	cout << one.getDay() << "/" << one.getMonth() << "/" << one.getYear() << endl;
//
//	++one;
//	one.displayDate();
//	one += 2;
//	one.displayDate();
//	one = one + two;
//	one.displayDate();
//}

unsigned int Date::iio = 5;
//////End of Date class
float divide(int* a, int& b)
{
	float result = (*a) / b;
	return result;
}
int main()
{
	int aaa = 5, bbb = 1, c;
	c = divide(&aaa, bbb);
	cout << c << endl;
	return 0.5;

	unsigned char xb;
	cin >> hex >> xb;
	cout << hex;
	cout << xb << endl;

	any asd(3), aas(5), asw(2);
	cout << asd.x << endl;
	asd=-asd;
	cout << asd.x << endl;
	asd = aas + asw;
	cout << asd.x << endl;
	asd = asw - aas;
	cout << asd.x << endl;




	

	Sleep(500000);
	char* tt;
	tt = new char;


	int* arr = new int[5]{ 1,2,3,4,5 };
	int* arr1 = new int[5]{ 0 };
	arr1 = arr;
	cout << arr[3] << endl;
	cin >> a::i;
	
	a a1;
	a a2;
	a2.i = 5;
	cout << a2.i << endl;
	cout << a1.i << endl;
	late* w;
	w = new late1;
	w->f();
	cout << sizeof(early) << endl;
	cout << sizeof(late) << endl;
	cout << sizeof(early1) << endl;
	cout << sizeof(late2) << endl;
	int x;
	cin >> x;
	char* t;
	t = new char[4];
	cin >> t;
	t[4-1] = NULL;
	cout << t << endl;
	static char a[] = "lks4";
	cout << sizeof(a);
	cin >> a;
	//a[2] = NULL;
	cout << a << endl;


#pragma region ascii table
	/*char m = 'A';
	while (m <= 'Z') {
		cout << m << '\t' << (int)m++ << endl;
	}*/
#pragma endregion

#pragma region number of zeroes
	/*unsigned int number,countZeroes=0;
	cout<<"Enter the number: ";
	cin>>hex>>number;
	for(int i=0;i<32;i++)
	{
		if((number & 1)== 0)
			countZeroes++;
		number>>=1;
	}
	cout<<"Numbers of zeros is  "<<countZeroes<<endl;*/
#pragma endregion

#pragma region unpacking
	/*unsigned int x = 0x78932504;
	unsigned int y = 0x12013497;
	int arrt[16];
	for (int i = 7; i >= 0; i--)
	{
		arrt[i] = (x & 0xf);
		arrt[i + 8] = (y & 0xf);
		x >>= 4;  y >>= 4;
	}
	for (int i = 0; i < 16; i++)
		cout << arrt[i];*/
#pragma endregion

#pragma region number of ones
		/*unsigned int gh = 0xf;
		int counter = 0;
		while(gh!=0)
		{
			if (gh & 1)
				counter++;
			gh >>= 1;
		}
		cout << counter << endl;*/
#pragma endregion

#pragma region packing
		/*unsigned int x=0,y=0;
		unsigned int arr[16];
		for(int i=0;i<16;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<8;i++)
		{
			x<<=4;  y<<=4;
			x|=arr[i];  y|=arr[i+8];
		}
		cout<<hex;  cout<<x<<endl<<y<<endl;*/
#pragma endregion

#pragma region packing and unpacking
		/*int x = 0;
		unsigned char arr[4] = { 0x3f,0x30,0xff,0x3d };

		for (int i = 0; i < sizeof(arr); i++)
		{
			x <<= 8;
			x = x | arr[i];
		}
		cout << hex << x << endl;


		for (int i = sizeof(arr) - 1; i >= 0; i--)
		{
			arr[i] = x;
			x >>= 8;
		}
		for (int i = 0; i < sizeof(arr); i++)
			cout << (int)arr[i];*/
#pragma endregion

#pragma region motors on and off
			/*unsigned char x = 0x0, m;
			int arr[8];

			while (true)
			{
				x <<= 2;
				if (x == 0)
				{
					for (int i = 0; i < 8; i++)
					{
						arr[i] = x & 1;
						x >>= 1;
					}
					for (int i = 0; i < 8; i++)
						cout << arr[i];
					cout << endl;
					Sleep(500);
					x |= 0x3;
				}
				m = x;
				for (int i = 7; i >=0; i--)
				{
					arr[i] = m & 1;
					m >>= 1;
				}
				for (int i = 0; i < 8; i++)
					cout << arr[i];
				cout << endl;
				Sleep(500);
			}*/
#pragma endregion




	return 0;
}
