//List of departments
#include<iostream>
using namespace std;
struct student
{
	int Sid;
	char Sname[20];
};
struct employee
{
	int Eid;
	char Ename[30];
};
struct department
{
	char flag;
	union
	{
		student s;
		employee e;
	}person;
};
struct node
{
	department d;
	node* next;
};
int main()
{
	node* list, * temp;
	list = NULL;
	char ans;
	cout << "Wanna enter? : ";	cin >> ans;
	if (ans != 'y')
		exit(1);
	list = new node;
	if (list == NULL)
	{
		cout << "Not enough memory!!";	exit(1);
	}
	cout << "Which type? :  ";
	while (true)
	{
		cin >> ans;
		if (ans == 's' || ans == 'e')
		{
			list->d.flag = ans;		break;
		}
		cout << "Invalid, choose again: ";
	}
	switch (list->d.flag)
	{
	case's':
		cout << "Enter id, name respectively: \n";
		cin >> list->d.person.s.Sid;
		cin >> list->d.person.s.Sname;
		break;
	case'e':
		cout << "Enter id, name respectively: \n";
		cin >> list->d.person.e.Eid;
		cin >> list->d.person.e.Ename;
	}
	list->next = NULL;
	temp = list;
	cout << "continue? :  ";	cin >> ans;
	while (ans == 'y')
	{
		temp->next = new node;
		temp = temp->next;
		if (temp == NULL)
		{
			cout << "Not enough momory!";	exit(1);
		}
		cout << "Which type? : ";
		while (true)
		{
			cin >> ans;
			if (ans == 's' || ans == 'e')
			{
				temp->d.flag = ans;		break;
			}
			cout << "Invalid, choose again : ";
		}
		switch (ans)
		{
		case's':
			cout << "Enter id, name respectively: \n";
			cin >> temp->d.person.s.Sid;
			cin >> temp->d.person.s.Sname;
			break;
		case'e':
			cout << "Enter id, name respectively: \n";
			cin >> temp->d.person.e.Eid;
			cin >> temp->d.person.e.Ename;
		}
		temp->next = NULL;
		cout << "continue? : ";
		cin >> ans;
	}
	cout << "\n---------------------------------------------------------\n";
	temp = list;
	while (temp != NULL)
	{
		switch (temp->d.flag)
		{
		case's':
			cout << "-----Student record-----\n";
			cout << temp->d.person.s.Sid << endl;
			cout << temp->d.person.s.Sname << endl;
			break;
		case'e':
			cout << "-----Employee record-----\n";
			cout << temp->d.person.e.Eid << endl;
			cout << temp->d.person.e.Ename << endl;
			break;
		}
		temp = temp->next;
	}
	return 0;
}