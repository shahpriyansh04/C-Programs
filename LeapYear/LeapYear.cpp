#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int year;
    cout << "Enter year : ";
    cin >> year;

    if (year % 4 == 0)
    {
        cout << "Leap Year" << endl;
    }
    else
    {
        cout << "Not a leap year" << endl;
    }

    return 0;
}