#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int a,b,y;
	float z;
	
	cout<<"�п�J��� A = ";
	cin>>a;
	cout<<"�п�J��� B = ";
	cin>>b;
	cout<<endl<<"(1) ��N�B��p�U�G"<<endl;
	y=a+b;
	cout<<"A �[ B �����G�� "<<y<<endl;
	y=a-b;
	cout<<"A �� B �����G�� "<<y<<endl;
	y=a*b;
	cout<<"A �� B �����G�� "<<y<<endl;
	z=(float) a/b;
	cout<<"A �� B �����G�� "<<z<<endl;
	y=a%b;
	cout<<"A �� B ���l�Ƭ� "<<y<<endl<<endl;
	cout<<"(2) ���W�B����B��p�U�G"<<endl;
	a++;
	cout<<"A ���W���ᬰ "<<a<<endl; 
	b--;
	cout<<"B ����ᬰ "<<b<<endl; 
	a*=b;
	cout<<"A = A * B = "<<a<<endl<<endl;
	system("pause");
}
