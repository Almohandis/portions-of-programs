#include<windows.h>
#include<iostream>
#include<fstream>
using namespace std;
void sorting(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
}
//void dividingIntoTwoFiles( int recordsInRun,fstream originalFile)
//{
//	int* temp = new int[recordsInRun];
//	int sizeOfRun = sizeof(int) * recordsInRun;
//	originalFile.seekg(0);
//	originalFile.read((char*)temp, sizeOfRun);
//	//sort phase
//	while (!originalFile.eof())
//	{
//		sorting(temp, recordsInRun);
//		putInFile++;
//		if (putInFile % 2 == 1)
//			file1.write((char*)temp, sizeOfRun);
//		else
//			file2.write((char*)temp, sizeOfRun);
//
//		originalFile.read((char*)temp, sizeOfRun);
//	}
//	lastRun = sizeof(originalFile) % sizeof(sizeOfRun);
//	if (!lastRun)  // check if there exist last run or not
//	{
//		originalFile.read((char*)temp, lastRun);
//
//		putInFile++;
//		if (putInFile % 2 == 1)
//			file1.write((char*)temp, lastRun);
//		else
//			file2.write((char*)temp, lastRun);
//	}
//}
void dividingIntoTwoFiles(fstream& originalFile, fstream& file1, fstream& file2, int& recordsInRun)
{
	originalFile.close();
	file1.close();
	file2.close();
	originalFile.open("original file.txt", ios::in | ios::out | ios::app | ios::binary);
	file1.open("file1.txt", ios::in | ios::out | ios::trunc | ios::binary);
	file2.open("file2.txt", ios::in | ios::out | ios::trunc | ios::binary);
	originalFile.seekg(0);
	int temp, putInFile = 0;
	/////////////////////////////////////////
	/////////////////////////////////////////////////
	//////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////
	//originalFile.read((char*)&temp, sizeof(int));
	//sort phase
	while (!originalFile.eof())
	{
		putInFile++;
		if (putInFile % 2 == 1)
		{
			int i = 1;
			while (i <= recordsInRun && (!originalFile.eof()))
			{
				originalFile.read((char*)&temp, sizeof(int));
				file1.write((char*)&temp, sizeof(int));
				i++;
			}
		}
		else
		{
			int i = 1;
			while (i <= recordsInRun && (!originalFile.eof()))
			{
				originalFile.read((char*)&temp, sizeof(int));
				file2.write((char*)&temp, sizeof(int));
				i++;
			}
		}
	}
	originalFile.seekg(0);
	file1.seekg(0);
	file2.seekg(0);
	/*temp = 0;
	cout << "\nTesting dividing method\n";
	file2.seekg(0);
	file2.read((char*)&temp, sizeof(int));
	while (!file2.eof())
	{
		cout << temp << endl;
		file2.read((char*)&temp, sizeof(int));
	}

	cout << "Finishing dividing method\n";
	cin >> temp;*/
}
void main()/////////////////////////// Must test the trunc flaggggggggggggggggggggggggggggggggggggggggggggggggggggg
{
	int printingResults;
	fstream originalFile("original file.txt", ios::in | ios::out | ios::trunc | ios::binary);
	fstream tempFile("temp.txt", ios::in | ios::out | ios::trunc | ios::binary);
	fstream file1("file1.txt", ios::in | ios::out | ios::trunc | ios::binary);
	fstream file2("file2.txt", ios::in | ios::out | ios::trunc | ios::binary);
	fstream file3("file3.txt", ios::in | ios::out | ios::trunc | ios::binary);
	fstream finalFile("Final file.txt", ios::out | ios::binary | ios::in);
	if (!originalFile)
		cerr << 44 << endl;
	cout << "Enter records, 0 to exit:\n";
	int x, recordsInRun, totalRecords = 0, * temp, sizeOfRun, lastRun, putInFile = 0;
	cin >> x;
	//	cout << "sizeof int= " << sizeof(*temp) << endl;
	while (x != 0)
	{
		totalRecords++;
		originalFile.write((char*)&x, sizeof(int));
		cin >> x;
	}
	cout << "How many reocrds in a run?: ";
	cin >> recordsInRun;

	temp = new int[recordsInRun];
	sizeOfRun = sizeof(int) * recordsInRun;
	originalFile.seekg(0);
	originalFile.read((char*)temp, sizeOfRun);
	//sort phase
	while (!originalFile.eof())
	{
		sorting(temp, recordsInRun);
		tempFile.write((char*)temp, sizeOfRun);

		/*putInFile++;
		if (putInFile % 2 == 1)
			file1.write((char*)temp, sizeOfRun);
		else
			file2.write((char*)temp, sizeOfRun);*/

		originalFile.read((char*)temp, sizeOfRun);
	}

	lastRun = totalRecords % recordsInRun; //how many records in last run
	if (lastRun != 0)  // check if there exist last run or not
	{
		//originalFile.read((char*)temp, lastRun);       /////////////////return back if not work ////////////////////
		sorting(temp, lastRun);
		tempFile.write((char*)temp, lastRun);


		/*putInFile++;
		if (putInFile % 2 == 1)
			file1.write((char*)temp, lastRun);
		else
			file2.write((char*)temp, lastRun);*/
	}
	originalFile.seekg(0);
	tempFile.seekg(0);
	originalFile.close();
	originalFile.open("original file.txt", ios::in | ios::out | ios::trunc | ios::binary);
	tempFile.read((char*)temp, sizeOfRun);
	while (!tempFile.eof())
	{
		originalFile.write((char*)temp, sizeOfRun);
		tempFile.read((char*)temp, sizeOfRun);
	}


	if (lastRun != 0)  // check if there exist last run or not
	{
		//originalFile.read((char*)temp, lastRun);              /////////////////return back if not work ////////////////////
		originalFile.write((char*)temp, lastRun);
		/*putInFile++;
		if (putInFile % 2 == 1)
			file1.write((char*)temp, lastRun);
		else
			file2.write((char*)temp, lastRun);*/
	}

	cout << "Beginning of merge phase\n";

	// To check that data has sorted in original file////////////////////////////////////////

	/*originalFile.seekg(0);
	while (!originalFile.eof())
	{
		cout << 111 << endl;
		originalFile.read((char*)&printingResults, sizeof(int));
		cout << printingResults << endl;

	}
	if (originalFile.eof())
		cout << "Hello" << endl;
	exit(77);*/


	// merge phase
	int totalRuns = totalRecords % recordsInRun + totalRecords / recordsInRun;
	int runsInFirstFile = (totalRuns % 2) ? totalRuns / 2 + 1 : totalRuns / 2;
	int outerLoop = 1, tempFile1, tempFile2, i = 1, file1Pointer = 1, file2Pointer = 1;
	while (totalRuns != 1) // finishing of merge phase
	{
		cout << "File after sorting:\n";
		originalFile.seekg(0);
		cout << originalFile.tellg() << endl;
		while (!originalFile.eof())
		{
			originalFile.read((char*)&printingResults, sizeof(int));
			if (originalFile.eof())
				break;
			cout << printingResults << endl;
		}
		cout << "Wait\n";
		//Sleep(5000);
		//dividingIntoTwoFiles(originalFile, file1, file2, recordsInRun);



		originalFile.close();
		file1.close();
		file2.close();
		originalFile.open("original file.txt", ios::in | ios::out | ios::app | ios::binary);
		file1.open("file1.txt", ios::in | ios::out | ios::trunc | ios::binary);
		file2.open("file2.txt", ios::in | ios::out | ios::trunc | ios::binary);
		originalFile.seekg(0);
		int tempo, putInFile = 0;
		/////////////////////////////////////////
		/////////////////////////////////////////////////
		//////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////
		//originalFile.read((char*)&tempo, sizeof(int));
		//sort phase
		while (!originalFile.eof())
		{
			putInFile++;
			if (putInFile % 2 == 1)
			{
				int i = 1;
				while (i <= recordsInRun && (!originalFile.eof()))
				{
					originalFile.read((char*)&tempo, sizeof(int));
					if (originalFile.eof())
						break;
					file1.write((char*)&tempo, sizeof(int));
					i++;
				}
			}
			else
			{
				int i = 1;
				while (i <= recordsInRun && (!originalFile.eof()))
				{
					originalFile.read((char*)&tempo, sizeof(int));
					if (originalFile.eof())
						break;
					file2.write((char*)&tempo, sizeof(int));
					i++;
				}
			}
		}
		originalFile.seekg(0);
		file1.seekg(0);
		file2.seekg(0);




		cout << "File after sorting:\n";
		originalFile.close();
		originalFile.open("original file.txt", ios::in | ios::out | ios::app | ios::binary);
		originalFile.seekg(0);
		originalFile.seekp(0);
		cout << originalFile.tellg() << endl;
		originalFile.seekg(0);
		cout << originalFile.tellg() << endl;
		while (!originalFile.eof())
		{
			originalFile.read((char*)&printingResults, sizeof(int));
			if (originalFile.eof())
				break;
			cout << printingResults << endl;
		}
		cout << "Waiteeeeeeeeeeeeeeeeee\n";
		file1.close();
		file2.close();
		file1.open("file1.txt", ios::in | ios::out | ios::binary);
		file2.open("file2.txt", ios::in | ios::out | ios::binary);
		file1.seekg(0);
		file2.seekg(0);
		file3.seekp(0);
		file3.seekg(0);
		cout << file1.tellg() << endl;
		cout << file2.tellg() << endl;
		cout << file3.tellg() << endl << file3.tellp() << endl;


		cout << "\nTesting file1 after dividing\n";
		file1.read((char*)&printingResults, sizeof(int));
		while (!file1.eof())
		{
			cout << printingResults << endl;
			file1.read((char*)&printingResults, sizeof(int));
		}

		cout << "\nTesting file2 after dividing\n";
		file2.read((char*)&printingResults, sizeof(int));
		while (!file2.eof())
		{
			cout << printingResults << endl;
			file2.read((char*)&printingResults, sizeof(int));
		}
		cout << "Testing two files has finished, please wait\n";


		file1.seekg(0);
		file2.seekg(0);
		file3.seekg(0);
		file1.close();
		file2.close();
		file3.close();
		file1.open("file1.txt", ios::in | ios::out | ios::app | ios::binary);
		file2.open("file2.txt", ios::in | ios::out | ios::app | ios::binary);
		file3.open("file3.txt", ios::in | ios::out | ios::app | ios::binary);
		cout << file1.tellg() << endl;
		cout << file2.tellg() << endl;
		cout << file3.tellg() << endl << file3.tellp() << endl;

		file1.read((char*)&tempFile1, sizeof(int));
		file2.read((char*)&tempFile2, sizeof(int));
		while (outerLoop <= runsInFirstFile)
		{
			i = file1Pointer = file2Pointer = 1;
			while (i <= recordsInRun * 2)
			{
				if (tempFile2 <= tempFile1)
				{
					file3.write((char*)&tempFile2, sizeof(int));
					file2.read((char*)&tempFile2, sizeof(int));
					if (file2.eof())
						cout << "stukljdfj\n";
					file2Pointer++;

					if (file1Pointer == recordsInRun + 1)
					{
						while (file2Pointer <= recordsInRun)
						{
							file3.write((char*)&tempFile2, sizeof(int));
							file2.read((char*)tempFile2, sizeof(int));
							file2Pointer++;
							i++;
						}
					}
					if (file2Pointer == recordsInRun + 1)
					{
						while (file1Pointer <= recordsInRun)
						{
							file3.write((char*)&tempFile1, sizeof(int));
							file1.read((char*)&tempFile1, sizeof(int));
							file1Pointer++;
							i++;
						}
					}
					if (file2.eof())
					{
						while (!file1.eof())
						{
							file3.write((char*)&tempFile1, sizeof(int));
							file1.read((char*)&tempFile1, sizeof(int));
							file1Pointer++;
							i = recordsInRun * 2 + 1;
						}
					}
					/*file3.write((char*)&tempFile1, sizeof(int));
					while (file2Pointer < recordsInRun)
					{
						file3.write((char*)&tempFile1, sizeof(int));
						file1.read((char*)&tempFile1, sizeof(int));
						i++;
					}
					i++;
					continue;
					file2.read((char*)&tempFile2, sizeof(int));
					file2Pointer++;*/
				}
				else
				{
					file3.write((char*)&tempFile1, sizeof(int));
					file1.read((char*)&tempFile1, sizeof(int));
					if (file2.eof())
						cout << "stukljdfj\n";
					file1Pointer++;

					if (file2Pointer == recordsInRun + 1)
					{
						while (file1Pointer <= recordsInRun)
						{
							file3.write((char*)&tempFile1, sizeof(int));
							file1.read((char*)&tempFile1, sizeof(int));
							file1Pointer++;
							i++;
						}
					}
					if (file1Pointer == recordsInRun + 1)
					{
						while (file2Pointer <= recordsInRun)
						{
							file3.write((char*)&tempFile2, sizeof(int));
							file2.read((char*)tempFile2, sizeof(int));
							file2Pointer++;
							i++;
						}
					}
					if (file1.eof())
					{
						while (!file2.eof())
						{
							file3.write((char*)&tempFile2, sizeof(int));
							file2.read((char*)&tempFile2, sizeof(int));
							file2Pointer++;
							i = recordsInRun * 2 + 1;
						}
					}
					if (file2.eof())
					{
						while (!file1.eof())
						{
							file3.write((char*)&tempFile1, sizeof(int));
							file1.read((char*)&tempFile1, sizeof(int));
							file1Pointer++;
							i = recordsInRun * 2 + 1;
						}
					}
					/*file3.write((char*)&tempFile2, sizeof(int));
					while (tempFile2 < recordsInRun)
					{
						file3.write((char*)&tempFile2, sizeof(int));
						file2.read((char*)tempFile2, sizeof(int));
						i++;
					}
					i++;
					continue;
					file1.read((char*)&tempFile1, sizeof(int));
					file1Pointer++;*/
				}
				i++;
			}
			outerLoop++;
		}
		recordsInRun *= 2;
		totalRuns = totalRecords % recordsInRun + totalRecords / recordsInRun;
		runsInFirstFile = (totalRuns % 2) ? totalRuns / 2 + 1 : totalRuns / 2;
		outerLoop = 1;
	}

	cout << "File after sorting:\n";
	file3.seekg(0);
	file3.read((char*)&printingResults, sizeof(int));
	while (!file3.eof())
	{
		cout << printingResults << endl;
		file3.read((char*)&printingResults, sizeof(int));
	}
	cout << "\nDone hopofully\n";
}