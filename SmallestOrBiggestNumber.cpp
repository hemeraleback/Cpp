#include <iostream>                                                 //obligatory library of C++
using namespace std;                                                //library that make you write only "cout" instead of "std::cout"
int main()
{
    int num1, num2;                                                 //declaration of variables

    cout << "Enter the first number \t: ";                          //output
    cin >> num1;                                                    //input
    cout << "Enter the second number \t: ";                         //output
    cin >> num2;                                                    //input

    if (num1 > num2)                                                //condition
    {
        cout << "The smallest number is : \t" << num1 << endl;      //output
        cout << "The biggest number is : \t" << num2 << endl;       //output
    }
    else                                                            //if condition isn't true
    {
        cout << "The smallest number is : \t" << num2 << endl;      //output
        cout << "The biggest number is : \t" << num1 << endl;       //output
    }

    system("PAUSE");                                                //pause the code until you press any key
    return 0;
}
