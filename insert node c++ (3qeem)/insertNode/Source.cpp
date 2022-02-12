//Inserting a node with value after a given node number
#include<iostream>
using namespace std;
struct node
{
	int info;
	node* next;
};
void insertNode(node* list, int nodeNum, int nodeInfo)
{
	int i = 0;
	node* temp, * wholeList;
	wholeList = list;
	temp = new node;
	temp->info = nodeInfo;
	bool test = false;
	while (list!=NULL)
	{
		i++;
		if (nodeNum == i && list->next != NULL)
		{
			test = true;
			temp->next = list->next;
			list->next = temp;
			list = wholeList;
			break;
		}
		else if (nodeNum == i && list->next == NULL)
		{
			test = true;
			temp->next = NULL;
			list->next = temp;
			list = wholeList;
			break;
		}
		list = list->next;
	}
	if (test == false)
		delete temp;
}
int main()
{
	int nodeNum, nodeInfo;
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
	int nodes = 1;
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
	cout << "Enter a value to insert: ";
	cin >> nodeInfo;
	cout << "After which node? : ";
	cin >> nodeNum;
	insertNode(temp, nodeNum, nodeInfo);
	while (temp != NULL)
	{
		cout << temp->info << endl;
		temp = temp->next;
	}
	return 0;
}