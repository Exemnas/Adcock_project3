#include <iostream>

;using namespace std;

class Queues
{
public:
	Queues()//constructor
	{
		add = -1;
		del = -1;
	}
	int queueOperations();
	//functions for Queues
private:
	int size[5]; //size of queue
	int add;//variable holds added queue selection
	int del;//variable holds the removal queue selection.
}