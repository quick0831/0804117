#include <iostream>
#include <iomanip>
using namespace std;

struct Student{
	char chinese_name[8];
	int id_number;
	float ch_score,en_score,math_score,nr_score,soc_score;
};

main(){
	int i;
	Student class_A[5];
	float sum;
	for(i=0;i<5;i++){
		cout<<"�п�J�ǥͪ�����m�W�G";
		cin>>class_A[i].chinese_name;
		cout<<"�п�J�ǥͪ��Ǹ��G";
		cin>>class_A[i].id_number;
		cout<<"�п�J�ǥͪ���妨�Z�G";
		cin>>class_A[i].ch_score;
		cout<<"�п�J�ǥͪ��^�妨�Z�G";
		cin>>class_A[i].en_score;
		cout<<"�п�J�ǥͪ��ƾǦ��Z�G";
		cin>>class_A[i].math_score;
		cout<<"�п�J�ǥͪ��۵M���Z�G";
		cin>>class_A[i].nr_score;
		cout<<"�п�J�ǥͪ����|���Z�G";
		cin>>class_A[i].soc_score;
	}
	cout<<endl<<"�ǥͦ��Z��p�U�G"<<endl;
	cout<<setw(8)<<"�m�W"<<setw(7)<<"�Ǹ�";
	cout<<setw(6)<<"���"<<setw(6)<<"�^��"<<setw(6)<<"�ƾ�";
	cout<<setw(6)<<"�۵M"<<setw(6)<<"���|"<<setw(6)<<"�`��"<<endl;
	for(i=0;i<5;i++){
		cout<<setw(8)<<class_A[i].chinese_name<<setw(7)<<class_A[i].id_number;
		cout<<setw(6)<<class_A[i].ch_score<<setw(6)<<class_A[i].en_score;
		cout<<setw(6)<<class_A[i].math_score<<setw(6)<<class_A[i].nr_score;
		cout<<setw(6)<<class_A[i].soc_score;
		sum=class_A[i].ch_score+class_A[i].en_score
			+class_A[i].math_score+class_A[i].nr_score+class_A[i].soc_score;
		cout<<setw(6)<<sum<<endl;
	}
	cout<<endl<<"�^�� & �ƾ� �Ҥ��ή檺�ǥͦW�榳�G"<<endl;
	cout<<setw(8)<<"�m�W"<<setw(7)<<"�Ǹ�";
	cout<<setw(6)<<"�^��"<<setw(6)<<"�ƾ�"<<endl;
	for(i=0;i<5;i++)
		if(class_A[i].en_score < 60 && class_A[i].math_score < 60){
			cout<<setw(8)<<class_A[i].chinese_name<<setw(7)<<class_A[i].id_number;
			cout<<setw(6)<<class_A[i].en_score<<setw(6)<<class_A[i].math_score;
			cout<<endl;
		}
	system("pause");
}
