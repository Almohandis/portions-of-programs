
/****************************/
/**********Code By***********/
/***Abdulrahman Almohandis***/
/****************************/

#include<iostream>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

//Global variables
char* originalData;
int numberOfIndeces, tempIndeces, countOnes;

//intializing the bits array
void intializeArray(char *array) {
	
	for (int i = 0; i < numberOfIndeces; i++)
		originalData[i] = 0;
}

//Knowing how many bits the user wishes to input
void numOfInput() {
	//number of bits will be entered
	cin >> numberOfIndeces;

	tempIndeces = numberOfIndeces;

	//calculate total number of bits including stuffed ones
	numberOfIndeces += (numberOfIndeces / 5) + 1;

	//set number of indeces of the array
	originalData = new char[numberOfIndeces];

	intializeArray(originalData);
}

//Get data stream from user
void getData() {
	cout << "\nEnter your bit stream: \t\t";
	cin.getline(originalData, numberOfIndeces);
}

//Showing data after/before stuffing/destuffing
void showData() {
	
	for (int i = 0; i < numberOfIndeces; i++)
		cout << *(originalData + i);
	cout << endl;
}

//Stuffing technique
void stuffing() {

	//count number of ones to stuff one 'Zero' after every 5 ones
	countOnes = 0;
	for (int i = 0; i < numberOfIndeces; i++) {
		if (originalData[i] == '1')
			countOnes++;
		else
			countOnes = 0;

		if (countOnes == 5) {
			for (int j = numberOfIndeces - 1; j > (i + 1); j--)
				originalData[j] = originalData[j - 1];
			i++;
			originalData[i] = '0';
			countOnes = 0;
		}
	}
	cout << endl;
}

//Destuffing process
void destuffing() {
	countOnes = 0;
	for (int i = 0; i < numberOfIndeces; i++) {
		if (originalData[i] == '1')
			countOnes++;
		else
			countOnes = 0;
		if (countOnes == 5) {
			for (int j = i + 1; j < numberOfIndeces - 1; j++)
				originalData[j] = originalData[j + 1];
			countOnes = 0;
		}
	}
}

//Main function
void main() {

	//console title
	SetConsoleTitle("Abdulrahman Ashraf Almohandis");
	cout << "What is the size of your message in bits? ";

	//Get the total number of data will be inputed
	numOfInput();
	
	cin.ignore();

	//get bits from user
	getData();
	
	//showing data the user entered
	cout << "Your original data is: \t\t";
	showData();
	
	//Stuffing input data stream
	stuffing();

	//Result after stuffing
	cout << "Your data after stuffing bits: \t";
	showData();

	//Destuffing bits
	destuffing();

	//Result after destuffing
	cout << "Data after destuffing: \t\t";
	showData();

}