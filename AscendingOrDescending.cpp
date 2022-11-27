#include <iostream>
using namespace std;

int main(){
    
    int a, b, max, min;
    char choice;
    
    cout<<"Enter A and B"<<endl;
    cin>>a>>b;
    
    if(a > b){
        max = a;
        min = b;
    }
    else{
        max = b;
        min = a;
    }
    
    while(choice != 'c' && choice != b){
        cout<<"Do you want to read numbers in ascending or descending order?"<<endl<<" [c/d] : ";
        cin>>choice;
    }
    
    switch(choice){
        case 'c': cout<<min<<", "<<max; break;
        case 'd': cout<<max<<", "<<min; break;
    }

    return 0;
}
