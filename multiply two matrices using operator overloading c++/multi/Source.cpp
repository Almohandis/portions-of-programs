//Abdelrahman Ashraf Elmohandes
#include<iostream>
using namespace std;
class arr
{
private:
	int rows, columns;
public:
	bool test;
	int* arr1;
	arr(int m = 3, int n = 3)
	{
		rows = m;	columns = n;
		arr1 = new int[rows * columns];
		test = true;
	}
	void getRow(int& x) { x = rows; }
	void getColumn(int& x) { x = columns; }
};
arr operator*(arr& a, arr& b)
{
	int row1, column1,row2,column2;
	a.getColumn(column1); b.getRow(row2);
	if (row2 != column1)
	{
		a.test = false; return a;
	}
	a.getRow(row1);	b.getColumn(column2);
	arr c(row1, column2);
	int test = 0;
	int i=0;
	for (int k = 0; k < row1 * column2; k++)
	{
		if (test == column2)
		{
			test = 0;
			i++;
		}
		c.arr1[k] = 0;
		for (int j = 0; j < row2; j++)
			c.arr1[k] = c.arr1[k] + (a.arr1[column1 * i + j] * b.arr1[column2 * j + test]);
		test++;
	}
	return c;
}
int main()
{
	int rows1, columns1, rows2, columns2;
	bool test = false;
	cout << "Enter rows then columns for first matrix: ";
	cin >> rows1 >> columns1;
	arr a(rows1, columns1);
	cout << "Enter first matrix data:\n";
	for (int i = 0; i < rows1 * columns1; i++)
		cin >> a.arr1[i];
	cout << "Enter rows then columns for second matrix: ";
	cin >> rows2 >> columns2;
	arr b(rows2, columns2);
		cout << "Enter second matrix data:\n";
	for (int i = 0; i < rows2 * columns2; i++)
		cin >> b.arr1[i];
	arr c(rows1, columns2);
	c = a * b;
	if (c.test == false)
		cout << "Couldn't multiply these matrices!\n";
	else
	{
		cout << "Resulting array is: \n";
		for (int i = 0; i < rows1 * columns2; i++)
			(i % columns2 == 0) ? cout << '\n' << c.arr1[i] << '\t' : cout << c.arr1[i] << '\t';
	}
	cout << endl;
	return 0;
}