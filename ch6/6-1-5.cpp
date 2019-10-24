#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

main(){
	int a,b,op;
	
	while(true){
		cout<<"請依序輸入2個數字(0 0 確認離開)：";
		cin>>a>>b;
		if(a==0 && b==0) break;
		cout<<"請選擇運算方式(1)加法(2)減法(3)乘法(4)除法：";
		cin>>op;
		cout<<"運算結果：";
		switch(op){
			case 1:
				cout<<a<<"+"<<b<<"="<<a+b<<endl<<endl;
				break;
			case 2:
				cout<<a<<"-"<<b<<"="<<a-b<<endl<<endl;
				break;
			case 3:
				cout<<a<<"*"<<b<<"="<<a*b<<endl<<endl;
				break;
			case 4:
				cout<<a<<"/"<<b<<"="<<a/b<<endl<<endl;
				break;
			default:
				cout<<"輸入錯誤，無法運算。";
		}
	}
	system("pause");
}
