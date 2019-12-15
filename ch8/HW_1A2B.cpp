#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <ctime>
using namespace std;

main(){
	char code[5],in[128];
	bool r[10];
	for(int i=0;i<10;i++) r[i]=false;
	int c=10,t,t2,input;
	srand((unsigned int)time(NULL));rand();
	for(int i=0;i<4;i++){
		t=rand()%c;
		while(i==0 && t==0) t=rand()%c;
		t2=0;
		while(r[t+t2]) t2++;
		r[t+t2]=true;
		code[i]=t+t2+'0';
		c--;7
	}
	cout<<"1A2B猜數字遊戲"<<endl;	
	cout<<"是否要顯示答案？(1)是(2)否：";	
	cin>>input;	
	if(input==1)
		cout<<"答案："<<code;	
	cout<<endl;	
	while(true){	
		cout<<"輸入四位不重複數字：";	
		cin>>in;	
		itoa(atoi(in),in,10);	
		if(strlen(in)!=4) cout<<"輸入的字數長度不是四位數！";	
		else if(	
			in[0]==in[1] || in[1]==in[2] || in[2]==in[3] ||	
			in[0]==in[2] || in[1]==in[3] || in[0]==in[3]	
		) cout<<"輸入的數字重複！";	
		else if(strcmp(code,in)==0) break;	
		else{  //The input is correct	
			cout<<"經電腦判定的結果是：";	
			t=0;	
			for(int i=0;i<4;i++)	
				if(code[i]==in[i])t++;	
			cout<<t<<"A";	
			t=0;	
			for(int i=0;i<4;i++)	
				for(int j=0;j<4;j++)	
					if(i!=j && code[i]==in[j])	
						t++;	
			cout<<t<<"B";	
		}	
		cout<<endl<<endl;	
	}	
	cout<<"答對了！"<<endl;	
	system("pause");
}
