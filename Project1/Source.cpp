//#include<iostream>
//using namespace std;
//const int max = 2;
//struct Queue
//{
//	int top;
//	int arr[max];
//};
//void rotate_right(float arr[], int x)
//{
//	float temp = arr[x - 1];
//	for (int i = x - 1; i > 0; i--)
//		arr[i] = arr[i - 1];
//	arr[0] = temp;
//}
//bool push(Queue& q, int x)
//{
//	if (q.top == max - 1)
//		return false;
//	q.top++;
//	q.arr[q.top] = x;
//	return true;
//}
//bool pop(Queue& q, int& x)
//{
//	if (q.top == 0)
//		return false;
//	x = q.arr[1];
//	q.top--;
//	return true;
//}
//int main()
//{
//	int a = 3, b = 4;
//	cout << a << b++ << endl;
//
//
//
//
//	/*void* c;	int x;
//	c = new char;
//
//	cout << hex;
//	cout << c << endl;
//	x = 0xffffff;
//	exit(0xf*2);
//	cout << &x << endl;
//	c = &x;
//	exit(x);*/
//	/*cout<<x<<endl;
//	Queue* q;
//	q = NULL;
//	q = new Queue;
//	q->top = 5;
//	cout << q->top;*/
//
//
//	/*int x = 5;
//	cout << x << x++ << endl;
//	float a[5] = { 5,4,2,3,7 };
//	rotate_right(a, x);
//	for (int i = 0; i < x; i++)
//		cout << a[i] << "  ";
//	cout << endl;
//	bool rubbish;
//	queue q1;
//	q1.top = 0;
//	rubbish=push(q1, 4);
//	cout << rubbish << endl;
//	rubbish=push(q1, 5);
//	cout << rubbish << endl;
//	rubbish=push(q1, 1);
//	cout << rubbish << endl;
//	cout << q1.arr[1] << endl;
//	cout << endl;
//	rubbish= pop(q1, x);
//	cout << rubbish << endl;
//	cout << x << endl;
//	rubbish=pop(q1, x);
//	cout << rubbish << endl;
//	cout << x << endl;*/
//	return 0;
//}
///////////////////////////////////////////////
//
////void rotate_right(float arr[], int x)
////{
////	for (int i = x - 1; i > 0; i--)
////	{
////		float temp = arr[i];
////		arr[i] = arr[i - 1];
////		arr[i - 1] = temp;
////	}
////}
#include<iostream>
using namespace std;
class student
{
private:
	int age;
public:
	student(int a)
	{
		age = a;
	}
	void set(int x) { age = x; }
	void print() {	cout << age << endl;}
	int get() { return age; }
	
};
student operator++(student s)
{
	int t = s.get(); t++;
	s.set(t);
	s.print();
	return s;
}
void main()
{
	float sum = 0.0;
	for (float i = 0.01; i <= 1; i = i + 0.01)
		sum += i;
	cout << "sum= " << sum << endl;
	int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2); 
} 
}