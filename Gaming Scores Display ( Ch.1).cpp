// Gaming Scores Display ( Ch.1).cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int score[size];

    cout << " Enter your scores: " << endl;

    for (int index = 0; index < size; index++)
    {
        cin >> score[index];
    }

    cout << " Scores entered: " << endl;

    for (int index = 0; index < size; index++)
    {
        cout << score[index] << " ";
    }

    return 0;
}
