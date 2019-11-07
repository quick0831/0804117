#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int a,b,r;
	
	cout<<"Please input 2 numbers : ";
	cin>>a>>b;
	
	if(a<b){
		r=a;
		a=b;
		b=r;
	}
	
	r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	cout<<"The greatest common divisor is "<<b<<endl;
	system("pause");
}
