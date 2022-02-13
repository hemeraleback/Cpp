#include <iostream>                                                                                 //obligatory library of C++
using namespace std;                                                                                //library that make you write only "cout" instead of "std::cout"
int main()
{
    int money, rest, poor, cost;                                                                    //declaration of variables

    cout <<"Enter how much money you have \t: ";                                                    //output
    cin >> money;                                                                                   //input        
    cout <<"Enter how much the product costs \t: ";                                                 //output  
    cin >> cost;                                                                                    //input
    
    poor=cost-money;                                                                                //calculations
    rest=money-cost;                                                                                //calculations

    if (cost>money)                                                                                 //condition
    {
        cout<<"You don't have enough money, you are missing \t: " << poor << " euros " <<endl;      //output
    }
    else                                                                                            //if condition isn't true
    {
        cout<<"You can buy this product and you are missing \t: " << rest << " euros " << endl;     //output
    }

system("PAUSE");                                                                                    //pause the code until you press any key
return 0;
}
