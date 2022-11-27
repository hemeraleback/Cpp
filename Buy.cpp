#include <iostream>
using namespace std;

int main() {
	
	int price, saving=0, add;
	
	cout <<"Enter the price : ";
	cin >> price;
	
	do{
		cout<<"You are missing "<<price - saving<<endl<<"How many money do you want to add? : ";           
		cin >> add;

		saving += add;
	}
	while(saving < price);
	
	if(saving - price == 0)
		cout<<"Now you can buy it" << endl;
	else
		cout<<"Now you can buy it and you saved " << saving - price << " euros" << endl;
		
	return 0;
}
