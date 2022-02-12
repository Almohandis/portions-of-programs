#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class BankAccount
{
protected:
	int id;
	string name;
	double amount;
public:
	BankAccount()
	{
		id = 0;
		name = "";
		amount = 0.0;
	}
	void addRecord()
	{
		cout << "Enter id: \t";
		cin >> id;
		cout << "Enter name: \t";
		cin >> name;
		cout << "Enter amount: \t";
		cin >> amount;
	}
	void displayData()
	{
		cout << "id= \t" << id << "\nname= \t" << name << "\namount= \t" << amount << endl;
	}

};
void main()
{



}