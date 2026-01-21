// Step Tracker ( Ch.1).cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

int main()
{
	 const int size = 5;
	int steps[size];

	cout << " Enter the step counts : " << endl;

	for (int index = 0; index < size; index++)
	{
		cin >> steps[index];
	}

	cout << " Steps: ";

	for (int index = 0; index < size; index++)
	{
		cout << steps[index] << " ";
	}

	int total = 0;

	for (int index = 0; index < size; index++)
	{
		total += steps[index];
	}

	cout << " Total: " << total << endl;

	return 0;
}
