#include<iostream>
#include"List.h"
using namespace std;
List::List()
{
	head = curr = prev = 0;
	length = 0;
}
List::~List()
{
	while (head)
	{
		node* temp = head;
		head = head->next;
		delete temp;
	}
	curr = prev = 0;
	length = 0;
}
bool List::empty()
{
	if (curr == 0)
		return true;
	return false;
}
bool List::insertBefore(int x)
{
	if (head == 0)
		return false;
	node*temp = new node;
	temp->data = x;
	temp->next = curr;
	if (head == curr)
	{
		head = prev = temp;
		length++;
		return true;
	}
	prev->next = temp;
	prev = temp;
	length++;
	return true;
}
bool List::insertAfter(int x)
{
	if (head == 0)
	{
		head = new node;
		curr = head;
		head->data = x;
		head->next = 0;
		length++;
		return true;
	}
	node* temp = new node;
	temp->data = x;
	prev = curr;
	curr->next = temp;
	curr = temp;
	curr->next = 0;
	length++;
	return true;
}
bool List::remove(int &x)
{
	if (head == 0)
		return false;
	if (head == curr)
	{
		x = curr->data;
		delete head;
		List();
		return true;
	}
	x = curr->data;
	delete curr;
	curr = prev;
	prev = 0;
	curr->next = 0;
	return true;
}
bool List::retrieve(int& x)
{
	if (head == 0)
		return false;
	x = curr->data;
	return true;
}
void List::print()
{
	node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
}