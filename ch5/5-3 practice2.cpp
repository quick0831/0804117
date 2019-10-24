#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int gender,height,weight,age;
	float a,b,c,d;
	cout<<"請輸入性別(1)男(2)女：";
	cin>>gender;
	cout<<"請輸入身高(公分)：";
	cin>>height;
	cout<<"請輸入體重(公斤)：";
	cin>>weight;
	cout<<"請輸入年齡：";
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
	cout<<"BMR 為 "<<int(ans+0.5)<<endl;
}
