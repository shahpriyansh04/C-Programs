#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int n1 = 0, n2 = 1, sum = 0;
    for (int i = 1; i <= 13; i++)
    {
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
        cout << "The Fibonnaci series is\n"
             << sum << endl;
    }
    return 0;
}