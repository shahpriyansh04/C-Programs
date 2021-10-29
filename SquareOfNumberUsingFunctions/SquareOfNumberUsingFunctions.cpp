#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int square(int n)
{
    return n * n;
}
int main()
{
    int n, s;
    cout << "Enter a number : ";
    cin >> n;
    s = square(n);
    cout << "Square of " << n << " is " << s << endl;
    return 0;
}