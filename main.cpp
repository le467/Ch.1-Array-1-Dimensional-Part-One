/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int seats[size];
    
    cout << " Enter the seats: ";
    
    for ( int index = 0; index < size; index++)
    {
        cin >> seats[index];
    }
    
    cout << " Enter the new second seat value to be updated: ";
    
    int second_seat;
    cin >> second_seat;
    seats[1] = second_seat;
    
    for (int index = 0; index < size; index++)
    {
        cout << seats[index] << " ";
    }
    return 0;
}