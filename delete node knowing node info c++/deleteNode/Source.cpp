#include<iostream>
using namespace std;
struct node
{
	int info;
	node* next;
};
node* deleteNode(node* list, int nodeInfo, bool& test)
{
	node* temp, * back;
	temp = back = list;
	if (nodeInfo == temp->info)
	{
		test = true;
		temp = temp->next;
		delete back;
		return temp;
	}
	temp = temp->next;
	while (temp != NULL)
	{
		if (nodeInfo == temp->info)
		{
			test = true;
			back->next = back->next->next;
			delete temp;
			return list;
		}
		temp = temp->next;
		back = back->next;
	}
	return list;
}
int main()
{
	int nodeInfo;
	bool test = false;
	node* list, * temp;
	list = NULL;
	cout << "want to enter? : ";
	char ans;
	cin >> ans;
	if (ans != 'y')
		exit(1);
	list = new node;
	if (list == NULL)
	{
		cout << "Not enough memory!!\n";	exit(1);
	}
	cin >> list->info;
	list->next = NULL;
	temp = list;
	cout << "Continue?: ";
	cin >> ans;
	while (ans == 'y')
	{
		temp->next = new node;
		temp = temp->next;
		cin >> temp->info;
		temp->next = NULL;
		cout << "Continue?: ";
		cin >> ans;
	}
	temp = list;
	cout << "What info do you want to delete?: ";
	cin >> nodeInfo;
	temp = deleteNode(temp,nodeInfo,test);
	test ? cout << "Your info has beed deleted!\n" : cout << "Can't find your info!\n";
	cout << "Your list : \n";
	while (temp != NULL)
	{
		cout << temp->info << endl;
		temp = temp->next;
	}
	return 0;
}