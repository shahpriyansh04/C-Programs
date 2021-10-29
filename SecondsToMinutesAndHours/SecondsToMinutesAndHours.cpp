#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int seconds, hours, minutes;
    cout << "Enter seconds : ";
    cin >> seconds;
    minutes = seconds / 60;
    hours = minutes / 60;
    cout << "Minutes : " << minutes << endl;
    cout << "Hours : " << hours << endl;
    return 0;
}