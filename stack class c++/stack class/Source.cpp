#include<iostream>
#include"Stack.h"
using namespace std;
void main()
{
	Stack stk;
	cout << "Empty: " << stk.empty() << endl;
	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(4);
	stk.push(5);
	cout << "Popint: " << stk.pop() << endl;
	cout << "Empty: " << stk.empty() << endl;
	cout << "Full: " << stk.full() << endl;
}