//Deleting a specific node from a list
#include<iostream>
using namespace std;
struct node
{
	int info;
	node* next;
};
node* deleteNode(node* list, int nodeNum)
{
	int i = 0;
	node* temp, * wholeList;
	wholeList = list;
	while (list != NULL)
	{
		i++;
		if (nodeNum == 1)
		{
			temp = list->next;
			delete list;
			return temp;
		}
		else if (nodeNum == i + 1)
		{
			temp = list->next;
			list->next = list->next->next;
			delete temp;
			list = wholeList;
			return list;
		}
		list = list->next;
	}
}
int main()
{
	int nodeNum, nodeInfo = 0;
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
		nodes++;
		temp->next = new node;
		temp = temp->next;
		cin >> temp->info;
		temp->next = NULL;
		cout << "Continue?: ";
		cin >> ans;
	}
	temp = list;
	while (true)
	{
		cout << "Which node to delete? : ";
		cin >> nodeNum;
		if (nodeNum <= nodes && nodeNum>=1)
			break;
		else
			cout << "Out of boundaries!\n";
	}
	
	temp = deleteNode(temp, nodeNum);
	while (temp != NULL)
	{
		cout << temp->info << endl;
		temp = temp->next;
	}
	return 0;
}