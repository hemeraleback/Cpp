#include <iostream>
using namespace std;

int main(){
    int number, exponentation, i=1, result;

    cout<<"Enter the number: ";
    cin>>number;

    cout<<"Enter the exponentation: ";
    cin>>exponentation;

    for(result = number;i!=exponentation;i++){
        result = result * number;
    }

    cout<<number<<"^"<<exponentation<<" = "<<result;

    return 0;
}
