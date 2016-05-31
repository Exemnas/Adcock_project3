#include <iostream>
#include "queues.h"

;using namespace std;

int Queues::queueOperations()
{
	int userInput; //variable to hold the user's menu selection

	do
	{
		int newNum; //variable to hold the user's new number that is to be added to the queue
		cout<<"This menu is where you can quickly produce androids with no human features."<<endl;
		cout<<"As they come off the line, they only respond to numbers you name them with."<<endl;
		cout<<"Please select an action for your droid list."<<endl;
		cout<<"note: Because of materials being in short supply, we can only produce up to ten droids at a time."<<endl;
		cout<<"1 - Add a number to be programmed and printed on a droid."<<endl;
		cout<<"2 - Remove a droid from the queue."<<endl;
		cout<<"3 - Display current queue of droids."<<endl;
		cout<<"4 - Bring in the droids!"<<endl;
		cout<<"0 - Quit."<<endl;
		cin>>userInput;
		cout<<endl;

		switch (userInput) //switch method that determins the actions of manipulation to the queue based on the users choice of action
		{
		case 1:
			cout<<"Please add your number now."<<endl;
			cin>>newNum;
			if (add == -1 && del == -1)
			{
				add++;
				del++;
			}
			else
			{
				add++;
				if (add == 5)
				{
					cout<<"Queue is full."<<endl;
					add--;
					break;
				}
			}
			size[add] = newNum;
			cout<<"Number is added to queue."<<endl<<endl;
			break;
		case 2:
			int temp;
		for (int i = 0; i <= add; i++)
		{
			if((i+1) <= add)
			{
				temp = size[i+1];
				size[i] = temp;
			}
			else
			{
				add--;
				if(add==-1)
				{
					del = -1;
				}
				else
					del = 0;
			}
		}
		cout<<"First number is deleted from queue."<<endl<<endl;
			break;
		case 3:
			if(del != -1)
		{
			for(int integer = 0; integer <= add; integer++)
			{
				cout<<size[integer]<<endl;
			}
		}
		else
			cout<<"Queue is empty."<<endl;
			break;
		case 4:
			cout<<"****Droids are successfully produced. They are ready for your command****"<<endl<<endl;
			return 0;
			break;
		case 0:
			return 0;
			break;
		default:
			cout<<"**Invalid Entry**"<<endl<<endl;
			break;
		}
	}while(userInput != 9);

}