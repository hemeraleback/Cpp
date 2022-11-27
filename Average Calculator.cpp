#include <iostream>
using namespace std;
int main() {
	
	double sum, number=0, average, i=0;
	char stop='y';
	
	for(;stop == 'y'; i++){
		cout<<"Enter the number:";
		cin>>number;
		
		sum += number;
		
		cout<<"Do you want to enter any other number? :";
		cin>>stop;
	};
	
	cout<<"Your average is " << sum/i << endl;
	
	return 0;
}
