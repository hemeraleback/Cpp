#include <iostream>									//obligatory library of C++
using namespace std;								//library that make you write only "cout" instead of "std::cout"
int	main(){
	
	int angle;										//declaration of variables

	cout<<"write the measure of the angle \t: ";	//output
	cin>>angle;										//input
{
	if (angle == 90)								//condition
{
	cout<<"The angle is right" << endl;				//output
}
else if (angle < 90 and angle < 360)				//condition
{
	cout<<"The angle is acute" << endl <<;			//output
}
else if (angle > 90 and angle < 360)				//condition							
{
	cout<<"The angle is obtuse" << endl <<;			//output
}
else if (angle > 360)								//condition
{
	cout<<"The misure is too big" << endl <<;		//output
}}
system("PAUSE");									//pause the code until you press any key
return 0;
}

