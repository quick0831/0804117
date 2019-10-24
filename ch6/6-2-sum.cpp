#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int input,i;
	unsigned long long a=0,b=0;
	while(true){
		cout<<"請輸入大於一的數字："<<endl;
		cin>>input;
		a=0;b=0;
		if(input<=1)
			cout<<"輸入有誤，請重試。"<<endl;
		else{
			for(i=1;i<=input;i++){
				if(i%2==0)
					a=a+i;
				else
					b=b+i;
			}
			cout<<"總合為　："<<a+b<<endl;
			cout<<"偶數合為："<<a<<endl;
			cout<<"奇數合為："<<b<<endl;
		}
	}
}
