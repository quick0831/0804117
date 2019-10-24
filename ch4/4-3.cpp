#include <iostream>
#include <iomanip>
using namespace std;

/********************

* Buffet 餐廳結帳程式

* 2019/10/03 張峻魁 

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
	cout<<"用餐\日期："<<endl;
	cout<<"[ (1) 平日 (2) 假日 ]";
	cin>>weekday;
	cout<<"用餐\時段："<<endl;
	cout<<"[ (1) 午餐\ (2) 下午茶 (3) 晚餐\ ]";
	cin>>type;
	cout<<"5歲~未滿12歲人數：";
	cin>>half;
	cout<<"12歲以上人數：";
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
	cout<<"總金額為："<<final_count<<endl;
	system("pause"); 
}
