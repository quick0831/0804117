#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int score[4][5];
	int sum;
	cout<<"請依國英數自社的順序輸入"<<endl;
	cout<<"並以空白分隔"<<endl<<endl; 
	for(int i=0;i<4;i++){
		cout<<"請輸入第 "<<i+1<<" 位學生的成績：";
		for(int j=0;j<5;j++)
			cin>>score[i][j];
	}
	cout<<"           ~ 班級成績單 ~           "<<endl;
	cout<<"===================================="<<endl;
	cout<<" 座號 國文 英文 數學 自然 社會 總分 "<<endl;
	for(int i=0;i<4;i++){
		cout<<setw(4)<<i+1;
		sum=0;
		for(int j=0;j<5;j++){
			cout<<setw(5)<<score[i][j];
			sum=sum+score[i][j];
		}
		cout<<setw(5)<<sum;
		cout<<endl;
	}
} 
