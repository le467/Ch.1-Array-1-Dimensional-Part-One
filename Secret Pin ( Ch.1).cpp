// Secret Pin ( Ch.1).cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int pin[size];

    for (int index = 0; index < 5; index++)
    {
        cin >> pin[size];
    }

    int third_attempt = pin[2];

    cout << " Please enter your pin: " << endl;

    return 0;
}

