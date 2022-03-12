#include <iostream>
using namespace std;
int main(){

    int Adults=0, Minor=0, Age;
    char Name, Stop;

    do{
        
        cout<<"Enter the name \t:";
        cin>>Name;

        cout<<"Enter the age \t: ";
        cin>>Age;

        if (Age >= 18){
            Adults++;
        }
        else
        {
            Minor++;
        }
        
        cout<<"Do You want to add other people [y/n] \t:";
        cin>>Stop;
        
    }
    while(tolower(Stop) == 'y');

    cout<<"The are " << Adults << " adults, and " << Minor << " minor" << endl;

    system("PAUSE");
    return 0;
}
