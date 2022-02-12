#include<iostream>
#include"List.h"
using namespace std;
int main()
{
	List s;
	int x;
	cout << "empty: " << s.empty()<< endl;
	cout << s.insertAfter(1);
	cout << s.insertAfter(2);
	cout << s.insertAfter(3);
	cout << s.insertAfter(4);
	cout << s.insertAfter(6) << endl;
	s.print();
	cout<<s.insertBefore(5);
	cout << endl << endl;
	s.print();
	cout << s.retrieve(x);
	cout << endl << x << endl;
	return 0;
}