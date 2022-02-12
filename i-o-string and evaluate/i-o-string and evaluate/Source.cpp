#include<iostream>
using namespace std;
class stack
{
private:
	int top;
	int size;
	char* arr;
public:
	stack(int Size)
	{
		top = -1;
		size = Size;
		arr = new char[size];
	}
	bool push(char c)
	{
		if (top == size - 1)
			return 0;
		arr[++top] = c;
		return 1;
	}
	bool pop(char& c)
	{
		if (top == 0)
			return 0;
		c = arr[top--];
		return 1;
	}
};
void main()
{
	int size;
	static char a[] = { "There are a lot of letters in the stack" };
	//cout << a << endl;
	//cout << "Size of current array is: " << sizeof(a) << endl;
	cout << "Enter size of your stack array:  ";
	cin >> size;
	stack stk(size);
	int i = 0;
	bool test = true;
	while (a[i])
		if (!test = stk.push[i++])
			break;
	cout << "\nAfter popping the stack:\n";
	while (!stk.empty())
		cout << stk.pop();
	cout << endl;
}