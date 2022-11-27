#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter the number you want to know if is positive or negative :";
    cin >> num;

    if (num < 0 )
        cout << "Your Number is negative" << endl;
    else if (num > 0 )
	    cout << "Your Number is positive " << endl;
    else
        cout << "Your Number is not positive and not negative because is equal to zero " << endl;
	
    return 0;
}
