#include <iostream>
using namespace std;
int main(){
    double base, height;
    
    cout << "Enter the base: ";
    cin >> base;
    
    cout <<"Enter the Height: ";
    cin >> height;

    cout <<"The measure of the perimeter is " << (base + height) * 2 << endl;
    cout <<"The measure of the area is " << base * height << endl;

system("PAUSE");
return 0;
}
