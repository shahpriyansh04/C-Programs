#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int i, f = 1;
    for (i = 1; i <= 10; i++)
    {
        f = f * i;
    }
    cout << "The Factorial of first 10 numbers is " << f;
    return 0;
}