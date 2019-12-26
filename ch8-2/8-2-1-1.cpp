#include <iostream>
#include <iomanip>
using namespace std;

double cube(double x){
	double y;
	y=x*x*x;
	return y;
}

main(){
	double v1,v2;
	
	cout<<"請輸入一個數字：";
	cin>>v1;
	v2=cube(v1);
	cout<<v1<<"^3 = "<<v2<<endl;
	system("pause");
} 
