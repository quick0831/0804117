#include <iostream>
#include <iomanip>
using namespace std;

void sub_a(int &a, int &b){
	a+=2;
	b*=3;
	cout<<"�Ƶ{��������Ƭ��Ga = "<<a<<", b = "<<b;
}

void sub_b(int *a, int *b){
	*a+=4;
	*b=*a+3;
	cout<<"�Ƶ{��������Ƭ��Ga = "<<a<<", b = "<<b;
}

void sub_c(int *a, int &b){
	*a-=3;
	b=*a*5;
	cout<<"�Ƶ{��������Ƭ��Ga = "<<a<<", b = "<<b;
}

void sub_d(int a, int b){
	a*=6;
	b+=7;
	cout<<"�Ƶ{��������Ƭ��Ga = "<<a<<", b = "<<b;
}

main(){
	int x,y;
	cout<<"�п�J2�Ӿ�ơG";
	cin>>x>>y;
	cout<<"�{������e��l��Ƭ��Gx = "<<x<<", y = "<<y<<endl;
	sub_a(x,y);
	cout<<"�A�{��������Ƨ��ܬ��Gx = "<<x<<", y = "<<y<<endl;
	sub_b(&x,&y);
	cout<<"�A�{��������Ƨ��ܬ��Gx = "<<x<<", y = "<<y<<endl;
	sub_c(&x,y);
	cout<<"�A�{��������Ƨ��ܬ��Gx = "<<x<<", y = "<<y<<endl;
	sub_d(x,y);
	cout<<"�A�{��������Ƨ��ܬ��Gx = "<<x<<", y = "<<y<<endl;
	system("pause");
}
