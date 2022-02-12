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
arr operator *(arr& a, arr& b)
{
	int row, column;
	if (a.getColumn(column) != b.getRow(row))
	{
		cout << "Can't multiply!\n";	exit(3);
	}
	a.getRow(row);	b.getColumn(column);
	arr c(row, column);
	for (int i = 0; i < row * column; i++)
	{
		c.arr1[i] = 0;
		for (int j = 0; j < column; j++)
			c.arr1[i] += a.arr1[column * i + j] * b.arr1[column * j + i];
	}
	return c;
}
int main()
{
	int rows1, columns1,rows2,columns2;
	bool test = false;
	cout << "Enter rows then columns for first matrix: ";
	cin >> rows1 >> columns1;
	arr a(rows1, columns1);
	cout << "Enter first matrix data:\n";
	for (int i = 0; i < rows1 * columns1; i++)
		cin >> a.arr1[i];
	cout << "Enter rows then columns for second matrix: ";
	cin >> rows2 >> columns2;
	arr b(rows, columns)
	cout << "Enter second matrix data:\n";
	for (int i = 0; i < rows2 * columns2; i++)
		cin >> b.arr1[i];
	arr c(row1, columns2);
	c = a * b;
	cout << "Resulting array is: \n";
	for (int i = 0; i < row1*columns2; i++)
		(i % columns2 == 0) ? cout << '\n' << c.arr1[columns2 * i + j] << '\t' : cout << c.arr1[columns2 * i + j] << '\t';
	return 0;
}