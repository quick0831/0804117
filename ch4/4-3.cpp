#include <iostream>
#include <iomanip>
using namespace std;

/********************

* Buffet �\�U���b�{��

* 2019/10/03 �i�m�� 

 ********************/

main(){
	enum Price {
		Lunch=658,
		Teatime=498,
		Dinner=758
	} price;
	int half,adult;
	int weekday,type,final_count;
	// Do inputs
	cout<<"���\\����G"<<endl;
	cout<<"[ (1) ���� (2) ���� ]";
	cin>>weekday;
	cout<<"���\\�ɬq�G"<<endl;
	cout<<"[ (1) ���\\ (2) �U�ȯ� (3) ���\\ ]";
	cin>>type;
	cout<<"5��~����12���H�ơG";
	cin>>half;
	cout<<"12���H�W�H�ơG";
	cin>>adult;
	// Do price assign
	if(type==1) price=Lunch;
	if(type==2) price=Teatime;
	if(type==3) price=Dinner;
	// Do weekday assign
	final_count=price;
	if(weekday==2) final_count+=100;
	// Do final calculation
	final_count=final_count*(half*0.5+adult)*1.1;
	cout<<"�`���B���G"<<final_count<<endl;
	system("pause"); 
}
