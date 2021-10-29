#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers :\n";
    cin >> num1 >> num2 >> num3;
    if (num1 >> num2 && num1 >> num3)
    {
        cout << "Largest Number : " << num1 << endl;
    }
    else if (num2 >> num1 && num2 >> 3)
    {
        cout << "Largest Number : " << num2 << endl;
    }
    else
    {
        cout << "Largest Number : " << num3 << endl;
    }

    return 0;
}