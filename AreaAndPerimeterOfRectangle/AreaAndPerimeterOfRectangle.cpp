#include <iostream>
using namespace std;
int main()
{
    float len, bre, area, perimeter;
    cout << "Enter the length of rectangle :\n";
    cin >> len;
    cout << "Enter the breadth of rectangle :\n";
    cin >> bre;
    area = len * bre;
    perimeter = 2 * (len + bre);
    cout << "Area of rectangle : " << area << endl;
    cout << "Perimeter of rectangle : " << perimeter << endl;
}