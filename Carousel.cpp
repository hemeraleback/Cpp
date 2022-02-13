#include <iostream>                                                                                     //obligatory library of C++
using namespace std;                                                                                    //library that make you write only "cout" instead of "std::cout"

int main(){

    float children, adults, people, extra;                                                              //declaration of variables

    do {                                                                                                //start of a do-while

        cout<<"Enter how many adults get on the carousel" << endl;                                      //output
        cin>>adults;                                                                                    //input
        
        people = people + adults;                                                                       //calculations

        cout<<"Enter how many children get on the carousel" << endl;                                    //output
        cin>>children;                                                                                  //input

        people = people + (children/2);                                                                 //calculations
    }
    while(people < 30);                                                                                 //end of do-while

    if (people> 30)                                                                                     //condition
    {
        extra = people - 30;                                                                            //calculations
        cout<<"the maximum number of people has been exceeded " << extra << " must get off"<< endl;     //output
    }
    else                                                                                                //if condition isn't true
    {
        cout<<"the carousel has started" << endl;                                                       //output
    }
    system("PAUSE");                                                                                    //pause the code until you press any key
    return 0;
}
