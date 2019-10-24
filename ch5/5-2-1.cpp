#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int a,b,y;
	float z;
	
	cout<<"請輸入整數 A = ";
	cin>>a;
	cout<<"請輸入整數 B = ";
	cin>>b;
	cout<<endl<<"(1) 算術運算如下："<<endl;
	y=a+b;
	cout<<"A 加 B 的結果為 "<<y<<endl;
	y=a-b;
	cout<<"A 減 B 的結果為 "<<y<<endl;
	y=a*b;
	cout<<"A 乘 B 的結果為 "<<y<<endl;
	z=(float) a/b;
	cout<<"A 除 B 的結果為 "<<z<<endl;
	y=a%b;
	cout<<"A 除 B 的餘數為 "<<y<<endl<<endl;
	cout<<"(2) 遞增、遞減運算如下："<<endl;
	a++;
	cout<<"A 遞增之後為 "<<a<<endl; 
	b--;
	cout<<"B 遞減之後為 "<<b<<endl; 
	a*=b;
	cout<<"A = A * B = "<<a<<endl<<endl;
	system("pause");
}
