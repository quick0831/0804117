#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int gender,height,weight,age;
	float a,b,c,d;
	cout<<"�п�J�ʧO(1)�k(2)�k�G";
	cin>>gender;
	cout<<"�п�J����(����)�G";
	cin>>height;
	cout<<"�п�J�魫(����)�G";
	cin>>weight;
	cout<<"�п�J�~�֡G";
	cin>>age;
	if(gender==1){
		a=13.7;
		b=5.0;
		c=6.8;
		d=66;
	}else{
		a=9.6;
		b=1.8;
		c=4.7;
		d=655;
	}
	float ans=a*weight+b*height-c*age+d;
	cout<<"BMR �� "<<int(ans+0.5)<<endl;
}
