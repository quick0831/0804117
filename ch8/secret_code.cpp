#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

main(){
	int code,input,high=100,low=1;
	srand((unsigned int)time(NULL)); rand();
	for(int i=0;i<rand()/10;i++) rand();
	code=rand()%(high-low-1)+low+1;
	cout<<"+--------------+"<<endl;
	cout<<"|              |"<<endl;
	cout<<"|  ��          |"<<endl;
	cout<<"|        �K    |"<<endl;
	cout<<"|    ��        |"<<endl;
	cout<<"|          �X  |"<<endl;
	cout<<"|              |"<<endl;
	cout<<"+--------------+"<<endl<<endl;
	cout<<"�O�_�n��ܲ׷��K�X�H"<<endl;
	cout<<"(1)�O (2)�_      -> ";
	cin>>input;
	cout<<endl;
	if(input==1) cout<<"�׷��K�X���G"<<code<<endl;
	while(true){
		cout<<"�а��X�z���q���G";
		cin>>input;
		if(input<high && input>low){
			if(input==code) break;
			if(input<code) low=input;
			else high=input;
			cout<<"�׷��K�X�b "<<low<<" ~ "<<high<<" ����"<<endl;
			if(high-low==2) break;
		}else{
			cout<<"��J���~�A�Э���"<<endl;
		}
	}
	cout<<endl<<"�C�������A�׷��K�X���G"<<code<<endl<<endl;
	system("pause");
}
