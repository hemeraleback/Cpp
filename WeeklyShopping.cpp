#include <iostream>
using namespace std;
int	main(){

    int distance, consume, liter, travel, daily, weekly;

    cout<<"Enter the distance you need to travel"<<endl<<"-->";
    cin>>distance;

    cout<<"Enter how much you consume for each kilometer"<<endl<<"-->";
    cin>>consume;

    cout<<"Enter how much you spend on a liter" <<endl<<"-->";
    cin>>liter;

    travel=consume*distance;
    daily=travel*liter;
    weekly=daily*6;

    cout<<"The consumption for each trip is " << travel << " euros" << endl;
    cout<<"The daily cost is " << daily << " euros" << endl;
    cout<<"The weekly cost is " << weekly << "euros " << endl;

return 0;
}
