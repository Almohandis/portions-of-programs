#include<iostream>
#include<windows.h>
#include<conio.h>
#include<cstring>
#include<string>
#include<stdio.h>
using namespace std;

int main() {

}
#pragma file test
/*#include<iostream>
#include<fstream>
using namespace std;
void main()
{
	fstream originalFile("original file.txt", ios::in | ios::out | ios::trunc | ios::binary);
	if (!originalFile)
		cerr << "Error when openning!" << endl;
	cout << "Enter records, 0 to exit:\n";
	int x, totalRecords = 0, sizeOfRun, printingResults;
	cin >> x;
	while (x != 0)
	{
		totalRecords++;
		originalFile.write((char*)&x, sizeof(int));
		cin >> x;
	}
	originalFile.seekg(0);
	originalFile.close();
	originalFile.open("original file.txt", ios::in | ios::out | ios::app | ios::binary);
	cout << originalFile.tellg() << endl;
	//originalFile.read((char*)&printingResults, sizeof(int));
	while (!originalFile.eof())
	{
		originalFile.read((char*)&printingResults, sizeof(int));
		if (originalFile.eof())
			break;
		cout << printingResults << endl;
	}
}*/