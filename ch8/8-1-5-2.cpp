#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

main(){
	char d[10];
	int num,radix;
	
	cout<<"請輸入要轉換的數值：";
	cin>>num;
	cout<<"請輸入要轉換的進位方式：";
	cin>>radix;
	itoa(num,d,radix);
	
	cout<<num<<"轉換成"<<radix<<"進位="<<d<<endl;
	system("pause");
} 
