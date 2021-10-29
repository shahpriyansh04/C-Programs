#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 5 == 0 && i % 7 == 0)
        {
            cout << i << " is divisible by 5 and 7" << endl;
        }
    }
    return 0;
}