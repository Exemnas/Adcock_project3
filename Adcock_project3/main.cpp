//Steven Adcock
//Mr. Diesch
//9/29/12
//Project 3 - Interactive Program


#include <iostream>
#include <string>
#include <stack>
#include "stacks.h"
#include "queues.h"
#include "linkedList.h"

;using namespace std;

int main()
{
	//Declarations
	int userChoice;
	Stacks clone;
	Queues droid;
	Linked links;

	do {
	cout << "**Main Menu for Housekeeping Creator, where they clean while you relax.**" << endl;
	cout << "What would you like to do?" << endl;
	cout << "1 - Set up clones." << endl;
	cout << "2 - Set up droids." << endl;
	cout << "3 - Need help with your math homework?" << endl;
	cout << "0 - Exit program." << endl;
	cin >> userChoice;

	switch (userChoice)
	{
	case 1:
		clone.stacksOperations(); //function leading to class Stacks in stacks.h and stacksDef.cpp
		break;
	case 2:
		droid.queueOperations(); //function leading to class Queues in queues.h and queuesDef.cpp
		break;
	case 3:
		links.linkedOperations(); //function leading to class Linked in linkedList.h and linkedListDef.cpp
		break;

	}
	}
	while (userChoice != 0);
	system("pause");
	return 0;
}