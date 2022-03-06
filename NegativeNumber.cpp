#include <iostream>                                                                                     //obligatory library of C++
using namespace std;                                                                                    //library that make you write only "cout" instead of "std::cout"

int main(){

    int num1;                                                                                           //declaration of variables

    cout << "Enter the number you want to know if is positive or negative \t:";                         //output
    cin >> num1;                                                                                        //input

    if (num1 > 0 )                                                                                      //condtion
    {
        cout << "Your Number is negative" << endl;                                                      //output
    }
    else if (num1 < 0 )                                                                                 //condition
    {
	    cout << "Your Number is positive " << endl;                                                     //output
    }
	else                                                                                                //if condition isn't true
        cout << "Your Number is not positive and not negative because is equal to zero " << endl;       //output
    system("PAUSE");                                                                                    //pause the code until you press any key
    return 0;
}
