#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

main(){
	int a,b,op;
	
	while(true){
		cout<<"�Ш̧ǿ�J2�ӼƦr(0 0 �T�{���})�G";
		cin>>a>>b;
		if(a==0 && b==0) break;
		cout<<"�п�ܹB��覡(1)�[�k(2)��k(3)���k(4)���k�G";
		cin>>op;
		cout<<"�B�⵲�G�G";
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
				cout<<"��J���~�A�L�k�B��C";
		}
	}
	system("pause");
}
