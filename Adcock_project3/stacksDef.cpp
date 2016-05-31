#include <iostream>
#include <stack>
#include <string>
#include "stacks.h"

;using namespace std;

int Stacks::stacksOperations()
{
	stack <string> droidNames; //sets up first stack that will hold names that will be pushed/popped in the stack.
	stack <string> tempStack; //temporary stack

	int userChoice; //variable to hold user's input
	int topOfStack = 0; //variable for top of stack

	do
	{
		string name; //variable to hold clone name 

		cout << "From the menu, input the corresponding number with what you would like to do." << endl;
		cout << "From here, you can add and rename clones of yourself to do your dirty work." << endl; 
		cout << "Making it appear you're actually working when you're really relaxing." << endl;
		cout << "1 - Add a clone to the list." << endl;
		cout << "2 - Remove the last clone from the list." << endl;
		cout << "3 - Display list contents." << endl;
		cout << "4 - Send in the Clones!" << endl;
		cout << "0 - return." << endl;
		cin >> userChoice;
		switch (userChoice) //switch for Stack manipulation
		{
		case 1: //push() name
			cout << "Please insert name to store in stack." << endl;
			cin >> name;
			droidNames.push(name);
			cout << endl << endl;
			break;
		case 2: //pop() name
			droidNames.pop();
			cout << "**Name on top of stack is terminated**" << endl << endl;;
			break;
		case 3: //Displays stackNamesOne contents
			tempStack = droidNames;
			while (!droidNames.empty())
			{
				cout << droidNames.top() << endl;
				droidNames.pop();
			}
			droidNames = tempStack;
			cout << endl << endl;
			break;
		case 4:
			cout << "BZZZT~~~" << endl;
			cout << "****Clones successfully created****" << endl << endl;
			return 0;
		case 0: //Exit
			break;
		default:
			cout << "Invalid Input" << endl << endl;
			break;
		}

	} while (userChoice != 0);\
}