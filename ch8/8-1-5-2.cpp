#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

main(){
	char d[10];
	int num,radix;
	
	cout<<"�п�J�n�ഫ���ƭȡG";
	cin>>num;
	cout<<"�п�J�n�ഫ���i��覡�G";
	cin>>radix;
	itoa(num,d,radix);
	
	cout<<num<<"�ഫ��"<<radix<<"�i��="<<d<<endl;
	system("pause");
} 
