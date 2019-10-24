#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int choice,number,amount=0,count=0;
	enum Price {A=50,B=60,C=70,D=80} coffee;
	bool loop=true;
	cout<<"請輸入品項及數量？"<<endl;
	while(loop){
		cout<<"(1)濃縮咖啡、(2)美式咖啡、(3)拿鐵、(4)卡布奇諾、(0 0)確認離開：";
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
	cout<<"您的消費金額為："<<amount<<" 元"<<endl;
	system("pause");
}
