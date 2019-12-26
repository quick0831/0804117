#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
bool check(int ans, int num);

main(){
	int num,ans;
	bool flag;
	
	srand((unsigned int)time(NULL));rand();
	ans=rand()%100+1;
	flag=false;
	cout<<"猜數字遊戲(答案介於1~100之間)"<<endl;
	while(!flag){
		cout<<"請輸入數值：";
		cin>>num;
		flag=check(ans,num);
	}
	system("pause");
}

bool check(int ans, int num){
	if(ans==num){
		cout<<"答對了！遊戲結束。"<<endl;
		return true;
	}else{
		cout<<"提示：比 "<<num<<" ";
		if(ans>num)
			cout<<"大";
		else
			cout<<"小";
		cout<<endl<<endl;
		return false;
	}
}
