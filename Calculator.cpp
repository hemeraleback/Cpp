#include <iostream>
using namespace std;

int main(){
    double n1, n2, sum;
    char ol;
    bool exit;

    do {
        cout<<"Enter what type of operation you want to do [+,-,*,/]: ";
        cin>>ol;

        if (ol != '+' && ol != '-' && ol != '/' && ol != '*')
        {
            cout<<"Your operator is invalid, try again"<<endl;
        }
        else
        {
            exit = true;
        }
    }
    while (exit == false);

    cout<<"Enter the first number: ";
    cin>>n1;

    cout<<"Enter the second number: ";
    cin>>n2;

    if(ol == '+')
    {
        sum = n1 + n2;
        cout<<n1 << " + " << n2 << " = " << sum;
    }
    else if(ol == '-')
    {
        sum = n1 - n2;
        cout<<n1 << " - " << n2 << " = " << sum;
    }
    else if(ol == '*')
    {
        sum = n1 * n2;
        cout<<n1 << " * " << n2 << " = " << sum;
    }
    else if(ol == '/')
    {
        sum = n1 / n2;
        cout<<n1 << " / " << n2 << " = " << sum;
    }
    return 0;
}
