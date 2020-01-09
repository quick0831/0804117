#include <iostream>
#include <iomanip>
using namespace std;

struct Student{
	char chinese_name[8];
	int id_number;
	float ch_score,en_score,math_score,nr_score,soc_score;
	int rank;
	float sum;
};

main(){
	int i;
	Student class_A[5]={
		{"����L",105201,80,80,90,80,90},{"�P�N��",105202,80,60,50,60,60},
		{"���l��",105203,90,90,60,90,60},{"���e�Y",105204,60,50,50,60,60},
		{"�L�̨�",105205,80,70,70,80,60}
	};
	for(i=0;i<5;i++)
		class_A[i].sum=class_A[i].ch_score+class_A[i].en_score
			+class_A[i].math_score+class_A[i].nr_score+class_A[i].soc_score;
	cout<<endl<<setw(40)<<"===== ��l�ǥͦ��Z�� ====="<<endl;
	cout<<setw(8)<<"�m�W"<<setw(7)<<"�Ǹ�";
	cout<<setw(6)<<"���"<<setw(6)<<"�^��"<<setw(6)<<"�ƾ�";
	cout<<setw(6)<<"�۵M"<<setw(6)<<"���|"<<endl;
	for(i=0;i<5;i++){
		cout<<setw(8)<<class_A[i].chinese_name<<setw(7)<<class_A[i].id_number;
		cout<<setw(6)<<class_A[i].ch_score<<setw(6)<<class_A[i].en_score;
		cout<<setw(6)<<class_A[i].math_score<<setw(6)<<class_A[i].nr_score;
		cout<<setw(6)<<class_A[i].soc_score<<endl;
	}
	//------------------------------------------------
	int index[5],temp;
	for(i=0;i<5;i++) index[i]=i;
	for(i=0;i<5;i++)
		for(int j=i+1;j<5;j++)
			if(class_A[index[i]].sum < class_A[index[j]].sum){
				temp=index[i];
				index[i]=index[j];
				index[j]=temp;
			}
	for(i=0;i<5;i++) class_A[index[i]].rank=i+1;
	//------------------------------------------------
	cout<<endl<<setw(40)<<"===== �Ƨǫ�ǥͦ��Z�� ====="<<endl;
	cout<<setw(8)<<"�m�W"<<setw(7)<<"�Ǹ�";
	cout<<setw(6)<<"���"<<setw(6)<<"�^��"<<setw(6)<<"�ƾ�";
	cout<<setw(6)<<"�۵M"<<setw(6)<<"���|"<<setw(6)<<"�`��"<<setw(6)<<"�W��"<<endl;
	for(i=0;i<5;i++){
		cout<<setw(8)<<class_A[i].chinese_name<<setw(7)<<class_A[i].id_number;
		cout<<setw(6)<<class_A[i].ch_score<<setw(6)<<class_A[i].en_score;
		cout<<setw(6)<<class_A[i].math_score<<setw(6)<<class_A[i].nr_score;
		cout<<setw(6)<<class_A[i].soc_score<<setw(6)<<class_A[i].sum;
		cout<<setw(6)<<class_A[i].rank<<endl;
	}
	
	system("pause");
}
