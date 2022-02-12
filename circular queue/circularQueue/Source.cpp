/****************************/
/**********Code By***********/
/***Abdulrahman Almohandis***/
/****************************/

//Circular queue
#include<iostream>
using namespace std;
const int  max = 10;
struct queue
{
	int front, rear;
	char arr[max];
};
void reset(queue* q)
{
	q->front = q->rear = 0;
}
bool enqueue(queue* q, char c)
{
	if ((q->rear + 1) % max == q->front)
		return 0;
	q->rear = (q->rear + 1) % max;
	q->arr[q->rear] = c;
	return 1;
}
bool dequeue(queue* q, char& c)
{
	if (q->front == q->rear)
		return 0;
	q->front = (q->front + 1) % max;
	c = q->arr[q->front];
	return 1;
}
int main()
{
	queue q;
	reset(&q);
	static char arr[max];
	cout << "Enter chars to enqueue:  ";
	cin >> arr;
	bool test;
	char M;
	int i = 0;
	while (arr[i])
	{
		test = enqueue(&q, arr[i++]);
		if (!test)
		{
			cout << "Can't enqueue more!\n";
			break;
		}
	}
	cout << "Result after dequeuing is: \n";
	while (true)
	{
		test = dequeue(&q, M);
		if (!test)
			break;
		cout << M;
	}
	cout << endl;
	return 0;
}