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
	cout<<"|  終          |"<<endl;
	cout<<"|        密    |"<<endl;
	cout<<"|    極        |"<<endl;
	cout<<"|          碼  |"<<endl;
	cout<<"|              |"<<endl;
	cout<<"+--------------+"<<endl<<endl;
	cout<<"是否要顯示終極密碼？"<<endl;
	cout<<"(1)是 (2)否      -> ";
	cin>>input;
	cout<<endl;
	if(input==1) cout<<"終極密碼為："<<code<<endl;
	while(true){
		cout<<"請做出您的猜測：";
		cin>>input;
		if(input<high && input>low){
			if(input==code) break;
			if(input<code) low=input;
			else high=input;
			cout<<"終極密碼在 "<<low<<" ~ "<<high<<" 之間"<<endl;
			if(high-low==2) break;
		}else{
			cout<<"輸入錯誤，請重試"<<endl;
		}
	}
	cout<<endl<<"遊戲結束，終極密碼為："<<code<<endl<<endl;
	system("pause");
}
