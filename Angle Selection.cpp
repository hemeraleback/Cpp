#include <iostream>
using namespace std;
int main(){
	
	int angle = 361;
    
    while( angle > 360){
	    cout<<"Write the measure of the angle : ";
	    cin>>angle;
	    
	    if (angle > 360)
	    cout<<"The misure is too big" << endl;
    }
    
	if (angle == 90)
	cout<<"The angle is right" << endl;
	
	if (angle < 90)
	cout<<"The angle is acute" << endl;
	
	if (angle > 90)
	cout<<"The angle is obtuse" << endl;	
	
	system("PAUSE");
	return 0;
}
