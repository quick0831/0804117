#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int score[4][5];
	int sum;
	cout<<"�Ш̰�^�Ʀ۪������ǿ�J"<<endl;
	cout<<"�åH�ťդ��j"<<endl<<endl; 
	for(int i=0;i<4;i++){
		cout<<"�п�J�� "<<i+1<<" ��ǥͪ����Z�G";
		for(int j=0;j<5;j++)
			cin>>score[i][j];
	}
	cout<<"           ~ �Z�Ŧ��Z�� ~           "<<endl;
	cout<<"===================================="<<endl;
	cout<<" �y�� ��� �^�� �ƾ� �۵M ���| �`�� "<<endl;
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
