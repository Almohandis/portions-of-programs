/****************************/
/**********Code By***********/
/***Abdulrahman Almohandis***/
/****************************/
#pragma region sum two matrices treating them as arrays
#include<iostream>
using namespace std;
class arr
{
private:
	int rows, columns;
public:
	int* arr1;
	arr(int m = 3, int n = 3)
	{
		rows = m;	columns = n;
		arr1 = new int[rows * columns];
	}


	void getRow(int& x) { x = rows; }
	void getColumn(int& x) { x = columns; }

};
arr operator +(arr& a, arr& b)
{
	int row, column;
	a.getRow(row);	a.getColumn(column);
	arr c(row, column);
	for (int i = 0; i < row * column; i++)
		c.arr1[i] = a.arr1[i] + b.arr1[i];
	return c;
}
int main()
{
	int rows, columns;
	cout << "Enter rows then columns: ";
	cin >> rows >> columns;
	arr a(rows, columns), b(rows, columns), c(rows, columns);
	cout << "Enter first matrix data:\n";
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			cin >> a.arr1[columns * i + j];
	cout << "Enter second matrix data:\n";
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			cin >> b.arr1[columns * i + j];
	c = a + b;
	cout << "Resulting array is: \n";
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			((columns * i + j) % columns == 0) ? cout << '\n' << c.arr1[columns * i + j] << '\t' : cout << c.arr1[columns * i + j] << '\t';
	return 0;
}
#pragma endregion



#pragma region sum two matrices by normal way
//#include<iostream>
//using namespace std;
//class matrix
//{
//private:
//	int rows, columns;
//public:
//	int** arr;
//	matrix(int m = 3, int n = 3)
//	{
//		rows = m;	columns = n;
//		arr = new int* [rows];
//		for (int i = 0; i < rows; i++)
//			arr[i] = new int[columns];
//	}
//	void getRow(int& x) { x = rows; }
//	void getColumn(int& x) { x = columns; }
//};
//matrix operator+(matrix a, matrix b)
//{
//	int row, column;
//	a.getRow(row);	a.getColumn(column);
//	matrix c(row, column);
//	for (int i = 0; i < row; i++)
//		for (int j = 0; j < column; j++)
//			c.arr[i][j] = a.arr[i][j] + b.arr[i][j];
//	return c;
//}
//int main()
//{
//	////////Matrix class//////////
//	int rows, columns;
//	cout << "Enter rows: ";
//	cin >> rows;
//	cout << "Enter column: ";
//	cin >> columns;
//	matrix a(rows, columns), b(rows, columns), c(rows, columns);
//	cout << "Enter first matrix data:\n";
//	for (int i = 0; i < rows; i++)
//		for (int j = 0; j < columns; j++)
//			cin >> a.arr[i][j];
//	cout << "Enter second matrix data:\n";
//	for (int i = 0; i < rows; i++)
//		for (int j = 0; j < columns; j++)
//			cin >> b.arr[i][j];
//	c = a + b;
//	cout << "Resulting matrix is: \n";
//	for (int i = 0; i < rows; i++)
//		for (int j = 0; j < columns; j++)
//			((columns * i + j) % columns == 0) ? cout << '\n' << c.arr[i][j] << '\t' : cout << c.arr[i][j] << '\t';
//	return 0;
//}
#pragma endregion