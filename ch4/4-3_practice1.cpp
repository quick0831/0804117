#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int choice,number,amount=0,count=0;
	enum Price {A=50,B=60,C=70,D=80} coffee;
	bool loop=true;
	cout<<"�п�J�~���μƶq�H"<<endl;
	while(loop){
		cout<<"(1)�@�Y�@�ءB(2)�����@�ءB(3)���K�B(4)�d���_�աB(0 0)�T�{���}�G";
		cin>>choice>>number;
		if(choice==0) loop=false;
		if(choice==1) coffee=A;
		if(choice==2) coffee=B;
		if(choice==3) coffee=C;
		if(choice==4) coffee=D;
		amount=amount+coffee*number;
		count+=number;
	}
	if(count>=10) amount-=(count*5);
	cout<<"�z�����O���B���G"<<amount<<" ��"<<endl;
	system("pause");
}
