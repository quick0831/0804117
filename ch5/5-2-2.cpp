#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int a,b,y;
	bool z;
	
	cout<<"基本邏輯運算"<<endl;
	cout<<"請輸入 A = ";
	cin>>a;
	cout<<"請輸入 B = ";
	cin>>b;
	cout<<endl<<"(1) 位元運算如下："<<endl;
	y=a&b;
	cout<<"A and B 結果為 "<<y<<endl;
	y=a|b;
	cout<<"A or  B 結果為 "<<y<<endl;
	y=a^b;
	cout<<"A xor B 結果為 "<<y<<endl<<endl;
	cout<<"(2) 邏輯運算如下："<<endl;
	z=(a<10) && (b<10);
	cout<<boolalpha;
	cout<<"A and B 皆小於十？ "<<z<<endl;
	z=(a>4) || (b<4);
	cout<<"A 大於 4 or B 小於 4？ "<<z<<endl;
	z=!(a>b);
	cout<<"A 大於 B 的相反？ "<<z<<endl<<endl;
	system("pause");
}
