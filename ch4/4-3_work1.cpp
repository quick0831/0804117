#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int ticket_choice,ticket_type,number,price,amount=0;
	enum Ticket_price {Adult=799,TeenAger=666,Student=550,Elder=350,Child=250} ticket;
	bool loop;
	
	amount=0;loop=true;
	cout<<"請輸入票別(1)個人票、(2)團體票：";
	cin>>ticket_type;
	cout<<"請輸入票價種類及張數？"<<endl;
	while(loop){
		cout<<"(1)成人票、(2)軍警學生票、(3)學童票、(4)樂齡票、(5)幼童愛心票、(0 0)確認離開：";
		cin>>ticket_choice>>number;
		if(ticket_choice==0) loop=false;
		if(ticket_choice==1) ticket=Adult;
		if(ticket_choice==2) ticket=TeenAger;
		if(ticket_choice==3) ticket=Student;
		if(ticket_choice==4) ticket=Elder;
		if(ticket_choice==5) ticket=Child;
		if(ticket_type==1)
			price=ticket;
		else
			price=ticket-100;
		amount=amount+price*number;
	}
	cout<<"入園費用為："<<amount<<" 元"<<endl;
	system("pause");
}
