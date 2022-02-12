#include<iostream>
#include"Stack.h"
using namespace std;

Stack::Stack()
{
	top = -1;
}

bool Stack::full()
{
	return (top == StackSize - 1);
}

bool Stack::empty()
{
	return (top == -1);
}



void Stack::push(int item)
{
	if (full())
		cout << "Stack is full\n";
	else
		storage[++top] = item;
}

int Stack::pop()
{
	if (empty())
		cout << "Stack is empty\n";
	else
		return (storage[top--]);
}

int Stack::retrieve()
{
	if (empty())
		cout << "Stack is empty\n";
	return  storage[top];
}