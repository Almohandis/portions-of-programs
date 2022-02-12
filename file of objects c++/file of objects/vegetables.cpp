#include<iostream>
#include<fstream>
#include"vegetables.h"
using namespace std;
void vegetables::createVegeFile(void)
{
	fstream file("vegetables.dat", ios::out | ios::binary | ios::app);
	if (!file)
	{
		cerr << "\nError when openning!";
		exit(1);
	}
	else
		cout << "\nDone!";
	file.close();
}
void vegetables::addVege()
{
	vegetables V;
	V.setData();
	fstream file("vegetables.dat", ios::out | ios::app | ios::binary);
	if (!file)
	{
		cerr << "\nError when openning!";
		exit(1);
	}
	file.seekp(0, ios::end);
	file.write((char*)&V, sizeof(V));
	file.close();
}
void vegetables::setData()
{
	cout << "\nEnter vegetable item:\t";
	cin >> item;
	cout << "\nEnter vegetable name:\t";
	cin >> name;
	cout << "\nEnter vegetable color:\t";
	cin >> color;
}
void vegetables::printAllVeges()
{
	fstream file("vegetables.dat", ios::in | ios::binary);
	if (!file)
	{
		cerr << "\nError when openning!";
		exit(1);
	}
	file.seekg(0);
	vegetables V; 
	file.read((char*)&V, sizeof(V));
	while (!file.eof())
	{
		V.showData();
		file.read((char*)&V, sizeof(V));
	}
	file.close();
}
void vegetables::showData()
{
	cout << "\nVegetable item:\t\t" << item;
	cout << "\nVegetable name:\t\t" << name;
	cout << "\nVegetable color:\t" << color;
}
int vegetables::vegeCount()
{
	fstream file("vegetables.dat", ios::in | ios::binary);
	file.seekg(0, ios::end);
	int counter = file.tellg() / sizeof(vegetables);
	cout << "\nThere exist " << counter << " vegetable/s in the file!";
	return counter;
}
void vegetables::printOneVege()
{
	int counter = vegeCount();
	cout << "\nWhich vegetable do you want to take: ";
	int number;
	cin >> number;
	if (number > 0 && number <= counter)
	{
		cout << "\nYour selected vegetable:\n";
		fstream file("vegetables.dat", ios::in | ios::binary);
		if (!file)
		{
			cerr << "\nError when oprnning!";
			exit(1);
		}
		vegetables V;
		int position = sizeof(V) * (number - 1);
		file.seekg(position);
		file.read((char*)&V, sizeof(V));
		V.showData();
	}
	else
		cerr << "\nOut of range!";
}