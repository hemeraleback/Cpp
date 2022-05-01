#include <iostream>
using namespace std;

int main(){
    double n1, n2, sum, i=1;
    char ol;
    bool exit;

    do {
        cout<<"Enter what type of operation you want to do [+,-,*,/,^]: ";
        cin>>ol;

        //If the operatior isn't valid give an error message and let the user write it again
        if (ol != '+' && ol != '-' && ol != '/' && ol != '*' && ol != '^')
        {
            cout<<"Your operator is invalid, try again"<<endl;
        }
        else
        {
            //exit the loop if operator is valid
            exit = true;
        }
    }
    while (exit == false);

    if (ol != '^')
    {
        cout<<"Enter the first number: ";
        cin>>n1;

        cout<<"Enter the second number: ";
        cin>>n2;
    }
    else
    {
        cout<<"Enter the number: ";
        cin>>n1;

        cout<<"Enter the exponent: ";
        cin>>n2;

        for(sum = n1;i!=n2;i++){
        sum = sum * n1;
        }
    }

    switch (ol)
    {
        case '+':cout<<n1 << " + " << n2 << " = " << (n1+n2); break;
        case '-':cout<<n1 << " - " << n2 << " = " << (n1-n2); break;
        case '*':cout<<n1 << " * " << n2 << " = " << (n1*n2); break;
        case '/':cout<<n1 << " / " << n2 << " = " << (n1/n2); break;
        case '^':cout<<n1 << "^" << n2 << " = " << sum ; break;
    };
    
    cout<<endl;

    system("PAUSE");
    return 0;
}
