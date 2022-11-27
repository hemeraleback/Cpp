#include <iostream>
using namespace std;
int main()
{
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 < num2)
        cout << "The smallest number is " << num1 << " and the biggest number is " << num2 << endl;
    else
        cout << "The smallest number is " << num2 << " and the biggest number is " << num1 << endl;

    system("PAUSE");
    return 0;
}
