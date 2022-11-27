#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout<<"Enter the three numbers "<<endl;
    cin>>num1>>num2>>num3;
    
    if(num1 == num2)
        cout<<"The first and the second numbers are equal"<<endl;
    else if (num2 == num3)
        cout<<"The second and the third numbers are equal"<<endl;
    else if (num1 == num3)
        cout<<"The first and the third numbers are equal"<<endl;
    else
        cout<<"There aren't equal numbers"<<endl;
    
    return 0;
}
