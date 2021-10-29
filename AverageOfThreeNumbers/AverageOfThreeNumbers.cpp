#include <iostream>
#include <conio.h>

using namespace std;
int main()
{

    int a, b, c, avg;
    cout << "Enter three numbers : \n";
    cin >> a >> b >> c;
    avg = (a + b + c) / 3;
    cout << "Average is " << avg << endl;

    return 0;
}