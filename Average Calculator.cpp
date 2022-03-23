#include <iostream>
using namespace std;
int main() {
	
	int numbers=0, number, average, i=0;
	char stop='y';
	
	for(;stop == 'y'; i++){
		cout<<"Enter the number:";
		cin>>number;
		
		number+=number;
		
		cout<<"Do you want to enter any other number? :";
		cin>>stop;
	};
	
	average = numbers/i;
	
	cout<<"Your average is " << average << endl;
	
	system("PAUSE");
	return 0;
}
