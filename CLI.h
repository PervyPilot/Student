#pragma once
#include <iostream>
#include <string>
#include "ClassStudent.h"
using namespace std;

void PrintWelcome()
{
	cout << "=============" << endl;
	cout << "===Student===" << endl;
	cout << "=============" << endl;
	cout << endl;
	cout << "***************************" << endl;
	cout << "(c) STEP IT Academy" << endl;
	cout << "mail: nrafil1974@gmail.com" << endl;
	cout << "***************************" << endl;
}

void PrintMenu()
{
	cout << "++++++++++++++++++++++++++++++++++" << endl;
	cout << "Menu:" << endl;
	cout << "1. Show list of students" << endl;
	cout << "2. Add student to list" << endl;
	cout << "3. Change student details " << endl;
	cout << "4. Remove student from list " << endl;
	cout << "5. Clear all list " << endl;
	cout << "6. Export to file " << endl;
	cout << "0. Exit " << endl;
}
void PrintError(string message)
{
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	cout << "========E R R O R========" << endl;
	cout << "!!! " << message << " !!!" << endl;
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	cout << endl;
}

void PrintExit()
{
	cout << endl;
	cout << "-------------------" << endl;
	cout << "======Goodbye======" << endl;
	cout << "-------------------" << endl;
	cout << endl;
}
void AddStudents(Student students[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter info of student: " << endl;
		cout << "Last name - "; cin >> students[i].lastName;
		cout << "First name - "; cin >> students[i].firstName;
		students[i].dateBirth.day = 1;
		students[i].dateBirth.month = 12;
		students[i].dateBirth.year = 2020;
		students[i].SetAge(18);
		cout << "Faculty - "; cin >> students[i].faculty;
		students[i].group = i + 2;
		students[i].stage = i + 3;
	    students[i].study = true;
	}
}