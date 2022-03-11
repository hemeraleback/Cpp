#include <iostream>
using namespace std;
int main()
{
    double base, height, area, perimeter;
    
    cout << "Enter the base \t: ";
    cin >> base;
    
    cout <<"Enter the Height \t: ";
    cin >> height

    perimeter = (base + height) * 2;
    area = base * height;

    cout <<"The measure of the perimeter is \t: " << perimeter << endl;
    cout <<"The measure of the area is \t: " << area << endl;

system("PAUSE");
return 0;
}
