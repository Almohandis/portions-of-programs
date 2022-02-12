#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string c;
	ifstream inputF("ob.txt",ios::binary);
	ofstream outputF("obbb.txt",ios::binary);
	while (!inputF.eof())
	{
		getline(inputF, c);
		outputF << c;
	}
	return 0;
}