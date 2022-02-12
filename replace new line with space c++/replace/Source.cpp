#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void main() {
	string tempLine;
	ifstream original("test.txt");
	ofstream edited("edited_list.txt", ios::app);
	if (!original) {
		cerr << "error"<<endl;
	}
	if (!edited) {
		cerr << "Another error!\n";
	}
	while (!original.eof()) {
		getline(original, tempLine);
		edited << tempLine<<" ";
	}
}