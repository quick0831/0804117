#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int a,b,y;
	bool z;
	
	cout<<"���޿�B��"<<endl;
	cout<<"�п�J A = ";
	cin>>a;
	cout<<"�п�J B = ";
	cin>>b;
	cout<<endl<<"(1) �줸�B��p�U�G"<<endl;
	y=a&b;
	cout<<"A and B ���G�� "<<y<<endl;
	y=a|b;
	cout<<"A or  B ���G�� "<<y<<endl;
	y=a^b;
	cout<<"A xor B ���G�� "<<y<<endl<<endl;
	cout<<"(2) �޿�B��p�U�G"<<endl;
	z=(a<10) && (b<10);
	cout<<boolalpha;
	cout<<"A and B �Ҥp��Q�H "<<z<<endl;
	z=(a>4) || (b<4);
	cout<<"A �j�� 4 or B �p�� 4�H "<<z<<endl;
	z=!(a>b);
	cout<<"A �j�� B ���ۤϡH "<<z<<endl<<endl;
	system("pause");
}
