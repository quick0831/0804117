#include <iostream>
#include <iomanip>
using namespace std;

main(){
	char isbn[14],check='N';
	int j,n,s;
	
	j=10;
	s=0;
	cout<<"�п�JISBN�X�G";
	cin>>isbn;
	for(int i=0;i<12;i++)
		if(isbn[i]>='0' && isbn[i]<='9')
			s=s+int(isbn[i]-'0')*(j--);
	n=11-(s%11);
	if(n==10) check='X';
	if(n==11) check='0';
	if(n>0 && n<10) check=n+'0';
	if(check==isbn[12])
		cout<<"�ѽX���T"<<endl;
	else
		cout<<"�ѽX���~"<<endl;
	system("pause");
}
