#include <iostream>
#include <iomanip>
using namespace std;

main(){
	unsigned int count=0;
	double thick;
	cout<<"�п�J�Ȫ��p��(����)�G";
	cin>>thick;
	thick=thick/1000000000;
	while(thick<40){
		count++;
		thick*=2;
	}
	cout<<"�Ȥ@�@�n�� "<<count<<" ��"<<endl;
	cout<<"�`�p�׬� "<<thick<<" �U����"<<endl;
	system("pause");
}
