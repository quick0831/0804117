#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

main(){
	int a,b,c;
	cout<<"�п�J�T���Ϊ��T���(�Ѫ����u��A�H�Ů�Ϲj)";
	cin>>c>>b>>a;
	cout<<"�T���Ϊ��������G";
	if(a+b>c){
		if(pow(c,2)==pow(a,2)+pow(b,2))
			cout<<"�����T����"<<endl;
		else if(pow(c,2)<pow(a,2)+pow(b,2))
			cout<<"�U���T����"<<endl;
		else
			cout<<"�w���T����"<<endl;
	}
	else
		cout<<"��J���T����L�k�c���T����"<<endl;
	system("pause");
}
