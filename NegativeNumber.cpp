#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter the number you want to know if is positive or negative \t:";
    cin >> num;

    if (num < 0 ){
        cout << "Your Number is negative" << endl;
    }
	
    if (num > 0 ){
	    cout << "Your Number is positive " << endl;
    }
    
    if (num == 0){
        cout << "Your Number is not positive and not negative because is equal to zero " << endl;
    }
	
    system("PAUSE");
    return 0;
}
