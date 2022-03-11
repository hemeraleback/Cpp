#include <iostream>
using namespace std;
int main()
{
    double money, rest, poor, cost;

    cout <<"Enter how much money you have \t: ";
    cin >> money;
    
    cout <<"Enter how much the product costs \t: ";
    cin >> cost;
    
    poor=cost-money;
    rest=money-cost;

    if (cost>money){
        cout<<"You don't have enough money, you are missing \t: " << poor << " euros " <<endl;
    }
    else
    {
        cout<<"You can buy this product and you are missing \t: " << rest << " euros " << endl;
    }

system("PAUSE");
return 0;
}
