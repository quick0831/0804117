#include <iostream>
#include <iomanip>
using namespace std;
int fac(int n);

main(){
	int d,answer;
	
	cout<<"請輸入一個整數n(n>0)：";
	cin>>d;
	answer=fac(d);
	cout<<"階乘 "<<d<<"!="<<answer<<endl;
	system("pause"); 
}

int fac(int n){
	if(n==0)
		return 1;
	else
		return n*fac(n-1);
}
