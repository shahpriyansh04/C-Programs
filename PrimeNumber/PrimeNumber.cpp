#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int n, c = 0, i;
    cout << "Enter a number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not a Prime Number";
    }
    return 0;
}