#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

main(){
	float a,b,c,d,x1,x2;
	
	cout<<"input a,b,c from f(x)=ax2+bx+c : ";
	cin>>a>>b>>c;
	d=pow(b,2)-4*a*c;
	if(d>0){
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		cout<<"Two Solutions : "<<x1<<", "<<x2<<endl;
	}else if(d==0){
		x1=-b/2/a;
		cout<<"One Solution : "<<x1<<endl;
	}else{
		cout<<"No Solution"<<endl;
	}
	system("pause");
}
