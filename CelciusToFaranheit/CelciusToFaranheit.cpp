#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    float far, cel;
    cout << "Enter temperature in celcius : ";
    cin >> cel;
    far = (cel * 9) / 5.0 + 32;
    cout << "Temperature in farenheit. : " << far << endl;
    return 0;
}