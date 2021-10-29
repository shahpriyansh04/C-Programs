#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    float n, fact = 1, i;
    cout << "Enter a number : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial : " << fact << endl;

    return 0;
}
