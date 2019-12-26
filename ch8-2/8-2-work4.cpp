#include <iostream>
#include <iomanip>
using namespace std;
int gcd(int a, int b);

main(){
	int num1,num2;
	cout<<"請輸入第 1 個正整數：";
	cin>>num1;
	cout<<"請輸入第 2 個正整數：";
	cin>>num2;
	if(num1<num2){
		int temp=num1;
		num1=num2;
		num2=temp;
	}
	cout<<"最大公因數為："<<gcd(num1,num2)<<endl;
	system("pause"); 
}

int gcd(int a, int b){
	int r=a%b;
	if(r==0) return b;
	return gcd(b,r);
}
