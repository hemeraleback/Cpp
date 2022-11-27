#include <iostream>
using namespace std;
int main()
{
    double money, cost;

    cout <<"Enter how much money you have: ";
    cin >> money;
    
    cout <<"Enter how much the product costs: ";
    cin >> cost;

    if (cost>money)
        cout<<"You don't have enough money, you are missing " << cost-money << " euros " <<endl;
    else
        cout<<"You can buy this product and you saved " << money-cost << " euros " << endl;

system("PAUSE");
return 0;
}
