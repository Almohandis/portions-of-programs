#include<iostream>
#include<fstream>
#include"vegetables.h"
using namespace std;
void main()
{
	vegetables vege;
	char loop;
	do
	{
		cout << "\n1- create file   2- add vegetable   3- print all veges   4- pring one vege\n";
		cin >> loop;
		switch (loop)
		{
		case '1':
			vege.createVegeFile(); break;
		case '2':
			vege.addVege();	break;
		case '3':
			vege.printAllVeges();	break;
		case '4':
			vege.printOneVege();	break;
		default:
			cout << "\nUnkown choice!";
		}
		cout << "\nContinue?:\t";
		cin >> loop;
	} while (loop == 'y');
	
}