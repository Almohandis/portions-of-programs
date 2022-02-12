#include<iostream>
#include"Stack.h"
using namespace std;
Stack::Stack()
{
	top = 0;
}
void Stack::push(int x)
{
	top++;
	arr[top] = x;
}
int Stack::pop()
{
	return(arr[top--]);
}
bool Stack::full()
{
	return (top == max - 1);
}
bool Stack::empty()
{
	return(top == 0);
}