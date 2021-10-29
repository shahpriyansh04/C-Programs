#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
float area(float len, float bre)
{
    return len * bre;
}
int main()
{
    float len, bre, a;
    cout << "Enter lenght of rectangle : ";
    cin >> len;
    cout << "Enter breadth of rectangle : ";
    cin >> bre;
    a = area(len, bre);
    cout << "Area of rectangle : " << a << endl;
    return 0;
}