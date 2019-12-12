#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

main(){
	int i,j,n[6],m[7],hit,temp;
	// n是投注號碼 m是開獎號碼 *(m+6)是特別號 hit是中獎球數 
	bool pass,loop;
	srand((unsigned int)time(NULL)); rand();
	cout<<"大樂透模擬遊戲"<<endl;
	cout<<"請依序輸入六個號碼，必須是1~49的數字，且不可以重複。"<<endl;
	for(i=0;i<6;i++){
		cout<<"第"<<i+1<<"個數字：";
		cin>>*(n+i);
		pass=true;
		for(j=0;j<i;j++)
			if(*(n+i)==*(n+j)){
				cout<<"已經輸入過這個數字，請重新輸入！"<<endl;
				pass=false;
				break;
			}
		if(*(n+i)<1 || *(n+i)>49){
			cout<<"輸入的數字超出1~49的範圍，請重新輸入！"<<endl;
			pass=false;
		}
		if(!pass) i--;
	}
	loop=true;
	while(loop){
		//randomize
		for(i=0;i<=6;i++){
			*(m+i)=rand()%49+1;
			pass=true;
			for(j=0;j<i;j++)
				if(*(m+i)==*(m+j)){
					i--;
					break;
				}
		}
		
		//sort
		for(i=0;i<5;i++)
			for(j=0;j<5-i;j++)
				if(*(m+j) > *(m+j+1)){
					temp = *(m+j);
					*(m+j) = *(m+j+1);
					*(m+j+1) = temp;
				}
		
		//output
		cout<<endl<<"本期你選的數字為：";
		for(i=0;i<6;i++) cout<<setw(3)<<*(n+i);
		cout<<endl<<"本期開出樂透號碼：";
		for(i=0;i<6;i++) cout<<setw(3)<<*(m+i);
		cout<<"  特別號： "<<*(m+6)<<endl;
		
		//check prize
		pass=false;
		for(i=0;i<=6;i++)
			if(*(n+i)==*(m+6)){
				pass=true;
				break;
			}
		hit=0;
		for(i=0;i<=6;i++)
			for(j=0;j<6;j++)
				if(*(n+i)==*(m+j)){
					hit++;
					break;
				}
		if(pass){
			if(hit==2) cout<<"你中柒獎";
			else if(hit==3) cout<<"你中陸獎";
			else if(hit==4) cout<<"你中肆獎";
			else if(hit==5) cout<<"你中貳獎";
			else cout<<"你沒中獎";
		}else{
			if(hit==3) cout<<"你中普獎";
			else if(hit==4) cout<<"你中伍獎";
			else if(hit==5) cout<<"你中參獎";
			else if(hit==6) cout<<"你中頭獎";
			else cout<<"你沒中獎";
		}
		
		//loop
		cout<<endl<<"是否要繼續開獎(1)是(2)否：";
		cin>>i;
		if(i==2) loop=false;
	}
}
