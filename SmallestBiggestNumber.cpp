#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the three numbers "<<endl;
    cin>>a>>b>>c;
    
    if(a > b && a > c)
        cout<<"The biggest number is "<<a<<endl;
    else if (b > a && b > c)
        cout<<"The biggest number is "<<b<<endl;
    else
        cout<<"The biggest number is "<<c<<endl;
    
    if(a < b && a < c)
        cout<<"The smallest number is "<<a<<endl;
    else if (b < a && b < c)
        cout<<"The smallest number is "<<b<<endl;
    else
        cout<<"The smallest number is "<<c<<endl;

    return 0;
}
