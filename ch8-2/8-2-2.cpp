#include <iostream>
#include <iomanip>
using namespace std;

int x,y;

void Sub_A(){
	int x,y;
	x=0;y=0;
	cout<<"Sub_A()������Ƭ��Gx = "<<x<<"�A�O�����} = "<<&x<<endl;
	cout<<"Sub_A()������Ƭ��Gy = "<<y<<"�A�O�����} = "<<&y<<endl;
}

void Sub_B(){
	x=0;y=0;
	cout<<"Sub_B()������Ƭ��Gx = "<<x<<"�A�O�����} = "<<&x<<endl;
	cout<<"Sub_B()������Ƭ��Gy = "<<y<<"�A�O�����} = "<<&y<<endl;
}

main(){
	cout<<"�п�J���N��Ӿ�ơG";
	cin>>x>>y;
	cout<<"main �{������Ƭ��Gx = "<<x<<"�A�O�����} = "<<&x<<endl;
	cout<<"main �{������Ƭ��Gy = "<<y<<"�A�O�����} = "<<&y<<endl<<endl;
	Sub_A(); 
	cout<<"main �{������Ƭ��Gx = "<<x<<"�A�O�����} = "<<&x<<endl;
	cout<<"main �{������Ƭ��Gy = "<<y<<"�A�O�����} = "<<&y<<endl<<endl;
	Sub_B();
	cout<<"main �{������Ƭ��Gx = "<<x<<"�A�O�����} = "<<&x<<endl;
	cout<<"main �{������Ƭ��Gy = "<<y<<"�A�O�����} = "<<&y<<endl<<endl;
	system("pause");
}
