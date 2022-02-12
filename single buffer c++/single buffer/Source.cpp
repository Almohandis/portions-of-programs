#include<iostream>
#include<fstream>
using namespace std;
const int max = 5; // blocking factor for file of int records
void main()
{
	ofstream file("Data.txt", ios::out | ios::app | ios::binary);
	if (!file)
		cerr << "Error!!!\n";
	int arr[max], number = 1;
	int i = 0;
	cout << "Start entering numbers:\n";
	while (number)
	{
		cin >> number;
		arr[i] = number;
		i++;
		if (i == 5)
		{
			file.write((char*)arr, sizeof(int) * max);
			file << endl << endl;
			cout << "Data has written sucsessfully!\n";
			i = 0;
		}
	}
}