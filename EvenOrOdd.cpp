#include <iostream>
using namespace std;

int main(){
    
    int num, i, j=0, y=0;
    
    cout<<"How many numbers do you want to enter?"<<endl<<"-->";
    cin>>num;
    
    int vet[num], even[num], odd[num];
    
    for(i=0; i < num; i++){
        even[i] = 0;
        odd[i] = 0;
    }

    cout<<"Enter the numbers you want to know if they are even or odd: "<<endl;
    for(i = 0; i < num; i++){
        cout<<"["<<i+1<<"/"<<num<<"]";
        cin>>vet[i];
        }

    
    for(i = 0; i < num; i++){
        if (vet[i] % 2 == 0){
            even[j] = vet[i];
            j++;
        }
        else if (vet[i] % 2 == 1){
            odd[y] = vet[i];
            y++;
        }
    }
    
    cout<<"The even numbers are: ";
    for(j = 0; j < num; j++){
    if (even[j] == 0)
            break;   
        cout<<even[j]<< " ";
    }

    cout<<endl<<"The odd numbers are:  ";
    for(y = 0; y < num; y++){
        if(odd[y] == 0)
            break;
        cout<<odd[y]<<" ";
    }
    
    return 0;
}
