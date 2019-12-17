/// <summary>
/// This program demonstrates the use of the Queue abstract
/// data type (ADT). Queues are a first in, first out (FIFO)
/// ADT. Common algorithms of the Queue include enqueue,
/// dequeue, and peek. This implementation also includes
/// functions to test if the queue is full or empty.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: Main.cpp
/// Since: 12/16/2019

#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
	// initialize the queue with a size of 5
	Queue<int>* numbers = new Queue<int>(5);

	cout << "Welcome to the Queue demonstration!\n";
	
	cout << "\ntesting if queue is empty... should be true: ";
	if (numbers->isEmpty())
		cout << "true\n";
	else
		cout << "false\n"; // end if-else

	cout << "testing if queue is full... should be false: ";
	if (numbers->isFull())
		cout << "true\n";
	else
		cout << "false\n"; // end if-else

	cout << "enquing 5 numbers (1-5)...\n";
	for (int i = 1; i <= 5; i++)
		numbers->enqueue(i); // end for

	cout << "\ntesting if the queue is empty... should be false: ";
	if (numbers->isEmpty())
		cout << "true\n";
	else
		cout << "false\n"; // end if-else

	cout << "testing if the queue is full... should be true: ";
	if (numbers->isFull())
		cout << "true\n";
	else
		cout << "false\n"; // end if-else

	cout << "\npeeking the front of the queue... should be 1: ";
	cout << to_string(numbers->peek()) << "\n";

	cout << "dequeueing three numbers...\n";
	for (int i = 0; i < 3; i++)
		numbers->dequeue();

	cout << "peeking the front of the queue... should be 4: ";
	cout << to_string(numbers->peek()) << "\n";

	cout << "\ndeleting the queue and freeing allocated memory...\n";

	// free up allocated memory and exit successfully
	delete numbers;
	numbers = nullptr;

	cout << "\nThank you for checking out my Queue implementation!";

	return 0;
} // end main
