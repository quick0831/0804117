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
	cout<<"�q�Ʀr�C��(���פ���1~100����)"<<endl;
	while(!flag){
		cout<<"�п�J�ƭȡG";
		cin>>num;
		flag=check(ans,num);
	}
	system("pause");
}

bool check(int ans, int num){
	if(ans==num){
		cout<<"����F�I�C�������C"<<endl;
		return true;
	}else{
		cout<<"���ܡG�� "<<num<<" ";
		if(ans>num)
			cout<<"�j";
		else
			cout<<"�p";
		cout<<endl<<endl;
		return false;
	}
}
