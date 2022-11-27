#include <iostream>
using namespace std;

int main(){

    double children, adults, people, extra;

    do {
        cout<<"Enter how many adults get on the carousel" << endl;
        cin>>adults;
        
        people += adults;

        cout<<"Enter how many children get on the carousel" << endl;
        cin>>children;

        people += (children/2);
    }
    while(people < 30);

    if (people> 30)
        cout<<"the maximum number of people has been exceeded " << people - 30 << " must get off"<< endl;
    else
        cout<<"the carousel has started" << endl;
        
    system("PAUSE");
    return 0;
}
