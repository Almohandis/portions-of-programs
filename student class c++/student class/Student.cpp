#include<iostream>
#include<string>
#include"Student.h"
using namespace std;
Student::Student()
{
	stud_id = stud_level = 0;
	stud_name = "";
	for (int i = 0; i < sub_n; i++)
		stud_scores[i] = 0;
}
void Student::set(int id,int level,string name,double sc[])
{
	stud_id = id;	stud_level = level;
	stud_name = name;
	for (int i = 0; i < sub_n; i++)
		stud_scores[i] = sc[i];
}
void Student::print()
{
	cout << "Name= " << stud_name << ", "
		<< "ID=   " << stud_id << ", "
		<< "Level=" << stud_level << ", "
		<< "GPA= " << GPA() << endl;
}
double Student::GPA()
{
	double sumGPA = 0.0;
	for (int i = 0; i < sub_n; i++)
	{
		if (stud_scores[i] >= 90)
			sumGPA += 4;
		else if (stud_scores[i] >= 80)
			sumGPA += 3.7;
		else if (stud_scores[i] >= 70)
			sumGPA += 3.4;
		else
			sumGPA += 3.1;
	}
	sumGPA /= sub_n;
	return sumGPA;
}