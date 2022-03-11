#include <iostream>
using namespace std;

int main() {
	
	int price, saving=0, add, rest;
	
	cout <<"Enter the price \t : " << endl;
	cin >> price;
	
	do{

		cout<<"How many money do you want to add? \t : " << endl;           
		cin >> add;

		saving += add;

	}
	while(saving < price);
	
	rest = saving - price;
	
	if(rest == 0){
		cout<<"Now you can buy it" << endl;
    	}
	else
	{
		cout<<"Now you can buy it and you saved " << rest << " euro" << endl;
   	}
	system("PAUSE");
	return 0;
}
