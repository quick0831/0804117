#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int v1=2;
	float v2;
	double v3;
	
	cout<<"請輸入一個含有小數點一位的實數：";
	cin>>v2;
	v3=v1+v2;
	cout<<"兩數相加的結果為："<<v3<<endl;
	v1=(int) v2;
	cout<<"實數 "<<v2<<" 無條件捨棄之後的值 = "<<v1<<endl;
	v1=int(v2+0.5);
	cout<<"實數 "<<v2<<" 四捨五入之後的值 = "<<v1<<endl; 
	system("pause");
}
