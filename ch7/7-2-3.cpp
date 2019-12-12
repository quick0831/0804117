#include <iostream>
#include <iomanip>
using namespace std;

void sub_a(int &a, int &b){
	a+=2;
	b*=3;
	cout<<"副程式中的資料為：a = "<<a<<", b = "<<b;
}

void sub_b(int *a, int *b){
	*a+=4;
	*b=*a+3;
	cout<<"副程式中的資料為：a = "<<a<<", b = "<<b;
}

void sub_c(int *a, int &b){
	*a-=3;
	b=*a*5;
	cout<<"副程式中的資料為：a = "<<a<<", b = "<<b;
}

void sub_d(int a, int b){
	a*=6;
	b+=7;
	cout<<"副程式中的資料為：a = "<<a<<", b = "<<b;
}

main(){
	int x,y;
	cout<<"請輸入2個整數：";
	cin>>x>>y;
	cout<<"程式執行前原始資料為：x = "<<x<<", y = "<<y<<endl;
	sub_a(x,y);
	cout<<"，程式執行後資料改變為：x = "<<x<<", y = "<<y<<endl;
	sub_b(&x,&y);
	cout<<"，程式執行後資料改變為：x = "<<x<<", y = "<<y<<endl;
	sub_c(&x,y);
	cout<<"，程式執行後資料改變為：x = "<<x<<", y = "<<y<<endl;
	sub_d(x,y);
	cout<<"，程式執行後資料改變為：x = "<<x<<", y = "<<y<<endl;
	system("pause");
}
