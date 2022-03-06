#include <iostream>                                                         //obligatory library of C++
using namespace std;                                                        //library that make you write only "cout" instead of "std::cout"
int main()
{
    int base, height, area, perimeter;                                      //declaration of variables
    
    cout << "Enter the base \t: ";                                          //output
    cin >> base;                                                            //input
    cout <<"Enter the Height \t: ";                                         //output
    cin >> height;                                                          //input

    perimeter = (base + height) * 2;                                        //calculations
    area = base * height;                                                   //calculations

    cout <<"The measure of the perimeter is \t: " << perimeter << endl;     //output
    cout <<"The measure of the area is \t: " << area << endl;               //output

system("PAUSE");                                                            //pause the code until you press any key
return 0;
}