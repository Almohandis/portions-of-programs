#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
	Stack s1;

	s1.push(24);
	s1.push(54);
	s1.push(10);
	s1.push(15);

	cout << s1.retrieve() << endl;

	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;



	return 0;
}

