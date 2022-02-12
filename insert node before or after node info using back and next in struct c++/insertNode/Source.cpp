//Abdelrahman Ashraf Elmohandes
//Insertion of a node before of after given info
#include<iostream>
using namespace std;
struct node
{
	int info;
	node* next, * back;
};
node* insertNode(node* list, int nodeInfo, int nodeValue, char afterOrBefore, bool& test)
{
	node* temp, * wholeList;
	wholeList = list;
	temp = new node;
	temp->info = nodeValue;
	temp->back = NULL;
	switch (afterOrBefore)
	{
	case 'a':
		while (list != NULL)
		{
			if (nodeInfo == list->info)
			{
				test = true;
				temp->next = list->next;
				temp->back = list;
				list->next = temp;
				return wholeList;
			}
			list = list->next;
		}
		delete temp;
		return wholeList;
	case'b':
		if (nodeInfo == list->info)
		{
			test = true;
			temp->next = list;
			temp->back = list->back;//list->back->next = temp;
			return temp;
		}
		list = list->next;
		while (list != NULL)
		{
			if (nodeInfo == list->info)
			{
				test = true;
				temp->next = list;
				temp->back = list->back;
				list->back->next = temp;
				return wholeList;
			}
			list = list->next;
		}
		delete temp;
		return wholeList;
	}
}
int main()
{
	int nodeInfo, nodeValue;
	bool test = false;
	node* list, * temp;
	list = NULL;
	char afterOrBefore;
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
	cout << "Enter a value to insert: ";
	cin >> nodeValue;
	cout << "Which info are you looking for?";
	cin >> nodeInfo;
	cout << "After or before a node?(a or b) : ";
	cin >> afterOrBefore;
	temp = insertNode(temp, nodeInfo, nodeValue, afterOrBefore, test);
	test ? cout << "Your value has been inserted!\n" : cout << "Can't find your value!\n";
	cout << "Your list :\n";
	while (temp != NULL)
	{
		cout << temp->info << endl;
		temp = temp->next;
	}
	return 0;
}