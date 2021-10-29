#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
float area(float r)
{
    return 3.14 * r * r;
}
int main()
{
    float r, a;
    cout << "Enter radius of circle: ";
    cin >> r;
    a = area(r);
    cout << "Area of circle : " << a << endl;
    return 0;
}