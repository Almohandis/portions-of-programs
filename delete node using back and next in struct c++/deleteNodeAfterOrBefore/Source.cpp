#include<iostream>
using namespace std;
struct node
{
	int info;
	node* next, * back;
};
node* deleteNode(node* list, int nodeInfo,bool& test)
{
	node* temp, * wholeList;
	wholeList = list;
	if (nodeInfo == list->info)
	{
		test = true;
		temp = list;
		list = list->next;
		delete temp;
		return list;
	}
	list = list->next;
	while (list != NULL)
	{
		if (nodeInfo == list->info)
		{
			test = true;
			temp = list;
			list->back->next = list->next;
			delete temp;
			return wholeList;
		}
		list = list->next;
	}
	return wholeList;
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
	list->back = NULL;
	temp = list;
	cout << "Continue?: ";
	cin >> ans;
	while (ans == 'y')
	{
		temp->next = new node;
		temp->next->back = temp;
		temp = temp->next;
		cin >> temp->info;
		temp->next = NULL;
		cout << "Continue?: ";
		cin >> ans;
	}
	temp = list;
	cout << "Which info do you want to delete?:  ";
	cin >> nodeInfo;
	temp = deleteNode(temp, nodeInfo, test);
	test ? cout << "Your value has been deleted!\n" : cout << "Can't find your info!\n";
	cout << "Your list :\n";
	while (temp != NULL)
	{
		cout << temp->info << endl;
		temp = temp->next;
	}
	return 0;
}