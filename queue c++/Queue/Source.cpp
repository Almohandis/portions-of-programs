#include<iostream>
#include<string>
using namespace std;
const int  max = 100;
class Queue
{
	int front, rear;
	char arr[max];
public:
	Queue()
	{
		front = rear = 0;
	}
	void reset()
	{
		front = rear = 0;
	}
	bool enqueue(char c)
	{
		if (rear == max - 1)
			return false;
		arr[rear++] = c;
		return true;
	}
	bool dequeue(char& c)
	{
		if (front == rear)
			return false;
		c = arr[front++];
		return true;
	}
	char retrieve()
	{
		return arr[front];
	}
};
void main()
{
	Queue q;
	q.reset();
	static char arr[max];
	cout << "Enter chars to enqueue:  ";
	cin.get(arr, max, '#');
	bool succeed;
	char M;
	int i = 0;
	cout << "Enqueuing, please wait!......\n";
	while (arr[i])
	{
		succeed = q.enqueue(arr[i++]);
		if (!succeed)
		{
			cout << "Can't enqueue more!\n\n";
			break;
		}
	}
	cout << "Result after dequeue is: \n";
	while (true)
	{
		succeed = q.dequeue(M);
		if (!succeed)
		{
			cout << "\nCan't dequeue more!\n";
			break;
		}
		cout << M;
	}
	cout << endl;
}