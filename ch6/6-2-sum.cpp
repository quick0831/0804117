#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int input,i;
	unsigned long long a=0,b=0;
	while(true){
		cout<<"�п�J�j��@���Ʀr�G"<<endl;
		cin>>input;
		a=0;b=0;
		if(input<=1)
			cout<<"��J���~�A�Э��աC"<<endl;
		else{
			for(i=1;i<=input;i++){
				if(i%2==0)
					a=a+i;
				else
					b=b+i;
			}
			cout<<"�`�X���@�G"<<a+b<<endl;
			cout<<"���ƦX���G"<<a<<endl;
			cout<<"�_�ƦX���G"<<b<<endl;
		}
	}
}
