

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
////////////////////////////////


//Very important: the below code deals with operator overloading with post ++ not pre ++ I.M.

//#include<windows.h>
//#include<iostream>
//using namespace std;
//class student
//{
//private:
//	int age;
//public:
//	student(int x = 10) { age = x; }
//	void getAge(int& x) { x = age; }
//
//	//Mmember function with implementation
//	/*student operator++(int)
//	{
//		age++;
//		return student(age);
//	}*/
//
//	//friend function
//	/*friend student operator++(student &s,int)
//	{
//		s.age++;
//		return student(s.age);
//	}*/
//
//	//Member function with declaration only
//	student operator ++(int);
//};
//student student::operator++(int)
//{
//	age++;
//	return student(age);
//}
//int main()
//{
//	SetConsoleTitle("Abdelrahman Ashraf Elmohandes");
//	int c;
//	cout << "Enter student's age:  ";
//	cin >> c;
//	cout << endl << endl;
//	student s(c);
//	int x;
//	s.getAge(x);
//	cout << "Student's age before increment is: " << x << endl;
//	s++;
//	s.getAge(x);
//	cout << "Student's age after increment is: " << x << endl;
//
//	return 0;
//}


#include<windows.h>
#include<iostream>
using namespace std;
class student
{
private:
	int age;
public:
	student(int x = 10) { age = x; }
	void getAge(int& x) { x = age; }

	//Mmember function with implementation
	void operator+=(student&s)
	{
		age += s.age;
	}

	//friend function
	/*friend student operator+=(student &s,student&s1)
	{
		s.age += s1.age;
		return s;
	}*/

	//Member function with declaration only
	//student operator +=(student&s);
};
//student student::operator+=(student&s)
//{
//	this->age = this->age + s.age;
//	return student(this->age);
//}
int main()
{
	SetConsoleTitle("Abdelrahman Ashraf Elmohandes");
	int c;
	cout << "Enter student's age:  ";
	cin >> c;
	student s(c);
	cout << "Enter second student's age:  ";
	cin >> c;
	student s1(c);
	int x;
	s.getAge(x);
	cout << "Student's age before increment is: " << x << endl;
	s += s1;
	s.getAge(x);
	cout << "Both students' age is: " << x << endl;

	return 0;
}