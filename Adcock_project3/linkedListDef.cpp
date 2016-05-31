#include <iostream>
#include <string>
#include "linkedList.h"

;using namespace std;

struct nodes
{
	int info;
	nodes *link;

};

int Linked::linkedOperations()
{
	int userChoice;
	int inputNumber;
	int added = 0;
	int subtracted = 0;
	int multiplied = 0;
	int divided = 0;
	nodes *head, *foot, *newNode, *traverse, *temp;
	head = NULL;

	do {
	cout<<"This Menu is for math, if you're having trouble doing your homework."<<endl;
	cout<<"All I do is create Housekeepers, but this all i can do personally for you."<<endl;
	cout<<"What would you like to do?"<<endl;
	cout<<"1 - Input numbers needed to be manipulated."<<endl;
	cout<<"2 - Add numbers."<<endl;
	cout<<"3 - Subtract numbers."<<endl;
	cout<<"4 - Multiply numbers."<<endl;
	cout<<"5 - Divide numbers."<<endl;
	cout<<"0 - return."<<endl;
	cin >> userChoice;

	switch (userChoice)
	{
	case 1:
		cout << "Enter as many numbers as you want, just enter 999 when finished."<< endl;
		cin >> inputNumber;
		while (inputNumber != 999)
		{
			newNode = new nodes;
			newNode->info = inputNumber;
			newNode->link = NULL;
			if (head == NULL)
			{head = newNode;foot = newNode;}
			else
			{foot->link = newNode; foot = newNode;}
			cin >> inputNumber;
		}
		break;
	
	case 2:
		traverse = head;
		while (traverse != NULL)
		{cout << traverse->info << " "; added = added + traverse->info; traverse = traverse->link;}
		cout << endl << "The sum of the entered numbers are " << added << "." <<endl;
		break;
	case 3:
		traverse = head;
		while (traverse != NULL)
		{cout << traverse->info << " "; subtracted = subtracted - traverse->info; traverse = traverse->link;}
		cout << endl << "The subtraction of the entered numbers are " << subtracted << "." <<endl;
		break;
	case 4:
		traverse = head;
		while (traverse != NULL)
		{cout << traverse->info << " "; multiplied = multiplied * traverse->info; traverse = traverse->link;}
		cout << endl << "The subtraction of the entered numbers are " << multiplied << "." <<endl;
		break;
	case 5:
		traverse = head;
		while (traverse != NULL)
		{cout << traverse->info << " "; divided = divided * traverse->info; traverse = traverse->link;}
		cout << endl << "The subtraction of the entered numbers are " << divided << "." <<endl;
		break;
	case 0:
		return 0;
		break;
	default:
		cout<<"***Invalid Entry***"<<endl;
		break;
	}
	}while (userChoice != 0);
	return 0;
}