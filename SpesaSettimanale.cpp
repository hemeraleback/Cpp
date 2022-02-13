#include <iostream>                                                                 //obligatory library of C++
using namespace std;                                                                //library that make you write only "cout" instead of "std::cout"
int	main(){

    int distance, consume, liter, travel, daily, weekly;                            //declaration of variables

    cout<<"Enter the distance you need to travel" << endl;                          //output
    cin>>distance;                                                                  //input

    cout<<"Enter how much you consume for each kilometer" << endl;                  //output
    cin>>consume;                                                                   //input

    cout<<"Enter how much you spend on a liter" << endl;                            //output
    cin>>liter;                                                                     //input

    travel=consume*distance;                                                        //calculations
    daily=travel*liter;                                                             //calculations
    weekly=daily*6;                                                                 //calculations

    cout<<"The consumption for each trip is \t: " << travel << " euros" << endl;    //output
    cout<<"The daily cost is \t: " << daily << " euros" << endl;                    //output
    cout<<"The weekly cost is \t: " << weekly << "euros " << endl;                  //output

system("PAUSE");                                                                    //pause the code until you press any key
return 0;
}