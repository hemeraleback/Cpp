#include <iostream>
using namespace std;
int main(){
	
	int angle;

	cout<<"Write the measure of the angle \t: ";
	cin>>angle;

	if (angle == 90){
	cout<<"The angle is right" << endl;
	}
	
	if (angle < 90 && angle < 360){
	cout<<"The angle is acute" << endl <<;
	}
	
	if (angle > 90 && angle < 360){
	cout<<"The angle is obtuse" << endl <<;	
	}
	
	if (angle > 360){
	cout<<"The misure is too big" << endl <<;
	}

	system("PAUSE");
	return 0;
}
