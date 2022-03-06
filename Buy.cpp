#include <iostream>                                                                 	//obligatory library of C++
using namespace std;                                                                	//library that make you write only "cout" instead of "std::cout"

int main() {
	
	int price, saving, add, rest;                                                   //declaration of variables
	
	saving = 0;                                                                     //assing the value as 0
	
	cout <<"Enter the price \t : " << endl;                                         //output
	cin >> price ;                                                                  //input
	
	do{                                                                             //start of a do-while

		cout<<"How many money do you want to add? \t : " << endl;               //output              
		cin >> add ;                                                            //input

		saving += add;                                                          //calcultions

	}
	while(saving < price);                                                          //end of a do-while
	
	rest = saving - price;                                                          //calculations
	
	if(rest == 0){                                                                  //conditions
		cout<<"Now you can buy it" << endl;                                     //output
    }else{                                                                          	//if condition isn' true
		cout<<"Now you can buy it and you saved " << rest << " euro" << endl;   //output
    }
	system("PAUSE");                                                                //pause the code until you press any key
	return 0;
}
