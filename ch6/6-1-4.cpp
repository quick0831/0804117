#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

main(){
	int a,b,c;
	cout<<"請輸入三角形的三邊長(由長邊到短邊，以空格區隔)";
	cin>>c>>b>>a;
	cout<<"三角形的種類為：";
	if(a+b>c){
		if(pow(c,2)==pow(a,2)+pow(b,2))
			cout<<"直角三角形"<<endl;
		else if(pow(c,2)<pow(a,2)+pow(b,2))
			cout<<"銳角三角形"<<endl;
		else
			cout<<"鈍角三角形"<<endl;
	}
	else
		cout<<"輸入的三邊長無法構成三角形"<<endl;
	system("pause");
}
