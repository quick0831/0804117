#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

main(){
	int d;//dec
	int r;//leftover
	int k=0;//binary
	int p=0;//digit
	
	cout<<"Input a number(1~1000) : ";
	cin>>d;
	while(d!=0){
		r=d%2;
		d=d/2;
		k=k+r*pow(10,p++);
	}
	cout<<"In binary form : "<<k<<endl;
	system("pause");
}
