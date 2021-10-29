#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int m1, m2, m3;
    float avg;
    cout << "Enter marks in three subjects : \n";
    cin >> m1 >> m2 >> m3;
    avg = (m1 + m2 + m3) / 3.0;
    cout << "Average marks : " << avg << endl;
    if (avg > 70)
    {
        cout << "Distinction";
    }
    else if (avg > 50)
    {
        cout << "First Class";
    }
    else if (avg > 35)
    {
        cout << "Second Class";
    }
    else
    {
        cout << "Fail";
    }
    return 0;
}