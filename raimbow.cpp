#include <iostream>
#include <cstdlib>
using namespace std;

int n;

void rn(){
	n = rand()%9999;
	cout<<n;
}

int main(){
	while (1==1){
		system("COLOR 8");
		rn();
		system("COLOR 9");
		rn();
		system("COLOR A");
		rn();
		system("COLOR B");
		rn();
		system("COLOR C");
		rn();
		system("COLOR D");
		rn();
		system("COLOR E");
		rn();
		system("COLOR F");
		rn();
	}
}
