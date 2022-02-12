#include<iostream>
using namespace std;
struct phone
{
	 string country, area, phone;
};
struct student
{
	string name;
	int id;
	double GPA;
};
void main()
{
#pragma region sum 2 1 dimenssion arrays
	int arr1[3], arr2[3], arr3[3];
	cout << "Enter first array elements: " << endl;
	for (int i = 0; i < 3; i++)
		cin >> arr1[i];
	cout << "Enter second array elements: " << endl;
	for (int i = 0; i < 3; i++)
		cin >> arr2[i];
	cout << "Resulting array is: " << endl;
	for (int i = 0; i < 3; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
		cout << arr3[i] << '\t';
	}
	cout << endl;
#pragma endregion

#pragma region sum 2 2 dimenssion arrays
	int arr11[3][3], arr22[3][3], arr33[3][3];
	cout << "Enter first array elements: " << endl;
	for (int i = 0; i < 3; i++)
		for(int j=0;j<3;j++)
			cin >> arr11[i][j];
	cout << "Enter second array elements: " << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> arr22[i][j];
	cout << "Resulting array is: " << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 3; j++)
		{
			arr33[i][j] = arr11[i][j] + arr22[i][j];
			cout << arr33[i][j] << '\t';
		}
	}
	cout << endl;
#pragma endregion

#pragma region multiply 2 2 dimenssion arrays
	int arr111[3][3], arr222[3][3], arr333[3][3];
	cout << "Enter first array elements: " << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> arr111[i][j];
	cout << "Enter second array elements: " << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> arr222[i][j];
	cout << "Resulting array is: " << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 3; j++)
		{
			arr333[i][j] = 0;
			for (int k = 0; k < 3; k++)
			{
				arr333[i][j] += arr111[i][k] * arr222[k][j];
			}
			cout << arr333[i][j] << '\t';
		}
	}
	cout << endl;
#pragma endregion

#pragma region average for a 2 dimenssion array
	int arr1111[3][3], sum = 0;
	float average = 0.0;
	cout << "Enter array elements: " << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			cin >> arr1111[i][j];
			sum += arr1111[i][j];
		}
	average = sum / (sizeof(arr1111) / sizeof(int));
	cout << "Average is: " << average << endl;

#pragma endregion

#pragma region struct phone
	phone p1;
	cout << "Enter your country code: ";
	cin >> p1.country;
	cout << "Enter your area code: ";
	cin >> p1.area;
	cout << "Enter your phone number: ";
	cin >> p1.phone;
	cout << "Your full phone is: " << p1.country << p1.area << p1.phone << endl;
	cout << endl;
#pragma endregion

#pragma region student struct
	student s1;
	cout << "Enter your name: ";
	cin >> s1.name;
	cout << "Enter your ID: ";
	cin >> s1.id;
	cout << "Enter your GPA: ";
	cin >> s1.GPA;
	cout << "Hi " << s1.name << ", your ID is "
		<< s1.id << " and your GPA is " << s1.GPA << endl;
#pragma endregion

}