#include <iostream>
#include <iomanip>
using namespace std;

main(){
	char isbn[14],check='N';
	int j,n,s;
	
	j=10;
	s=0;
	cout<<"請輸入ISBN碼：";
	cin>>isbn;
	for(int i=0;i<12;i++)
		if(isbn[i]>='0' && isbn[i]<='9')
			s=s+int(isbn[i]-'0')*(j--);
	n=11-(s%11);
	if(n==10) check='X';
	if(n==11) check='0';
	if(n>0 && n<10) check=n+'0';
	if(check==isbn[12])
		cout<<"書碼正確"<<endl;
	else
		cout<<"書碼錯誤"<<endl;
	system("pause");
}
