#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int ticket_choice,ticket_type,number,price,amount=0;
	enum Ticket_price {Adult=799,TeenAger=666,Student=550,Elder=350,Child=250} ticket;
	bool loop;
	
	amount=0;loop=true;
	cout<<"�п�J���O(1)�ӤH���B(2)���鲼�G";
	cin>>ticket_type;
	cout<<"�п�J���������αi�ơH"<<endl;
	while(loop){
		cout<<"(1)���H���B(2)�xĵ�ǥͲ��B(3)�ǵ����B(4)���ֲ��B(5)�����R�߲��B(0 0)�T�{���}�G";
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
	cout<<"�J��O�ά��G"<<amount<<" ��"<<endl;
	system("pause");
}
