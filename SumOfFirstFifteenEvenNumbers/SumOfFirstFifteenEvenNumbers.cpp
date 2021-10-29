#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int i, sum = 0, c = 0;
    for (i = 1;; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
            c++;
        }
        if (c == 15)
            break;
    }
    cout << "The sum of first fifteen even numbers is " << sum;
    return 0;
}