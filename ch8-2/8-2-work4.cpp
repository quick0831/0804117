#include <iostream>
#include <iomanip>
using namespace std;
int gcd(int a, int b);

main(){
	int num1,num2;
	cout<<"�п�J�� 1 �ӥ���ơG";
	cin>>num1;
	cout<<"�п�J�� 2 �ӥ���ơG";
	cin>>num2;
	if(num1<num2){
		int temp=num1;
		num1=num2;
		num2=temp;
	}
	cout<<"�̤j���]�Ƭ��G"<<gcd(num1,num2)<<endl;
	system("pause"); 
}

int gcd(int a, int b){
	int r=a%b;
	if(r==0) return b;
	return gcd(b,r);
}
