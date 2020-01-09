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
		cout<<"請輸入學生的中文姓名：";
		cin>>class_A[i].chinese_name;
		cout<<"請輸入學生的學號：";
		cin>>class_A[i].id_number;
		cout<<"請輸入學生的國文成績：";
		cin>>class_A[i].ch_score;
		cout<<"請輸入學生的英文成績：";
		cin>>class_A[i].en_score;
		cout<<"請輸入學生的數學成績：";
		cin>>class_A[i].math_score;
		cout<<"請輸入學生的自然成績：";
		cin>>class_A[i].nr_score;
		cout<<"請輸入學生的社會成績：";
		cin>>class_A[i].soc_score;
	}
	cout<<endl<<"學生成績單如下："<<endl;
	cout<<setw(8)<<"姓名"<<setw(7)<<"學號";
	cout<<setw(6)<<"國文"<<setw(6)<<"英文"<<setw(6)<<"數學";
	cout<<setw(6)<<"自然"<<setw(6)<<"社會"<<setw(6)<<"總分"<<endl;
	for(i=0;i<5;i++){
		cout<<setw(8)<<class_A[i].chinese_name<<setw(7)<<class_A[i].id_number;
		cout<<setw(6)<<class_A[i].ch_score<<setw(6)<<class_A[i].en_score;
		cout<<setw(6)<<class_A[i].math_score<<setw(6)<<class_A[i].nr_score;
		cout<<setw(6)<<class_A[i].soc_score;
		sum=class_A[i].ch_score+class_A[i].en_score
			+class_A[i].math_score+class_A[i].nr_score+class_A[i].soc_score;
		cout<<setw(6)<<sum<<endl;
	}
	cout<<endl<<"英文 & 數學 皆不及格的學生名單有："<<endl;
	cout<<setw(8)<<"姓名"<<setw(7)<<"學號";
	cout<<setw(6)<<"英文"<<setw(6)<<"數學"<<endl;
	for(i=0;i<5;i++)
		if(class_A[i].en_score < 60 && class_A[i].math_score < 60){
			cout<<setw(8)<<class_A[i].chinese_name<<setw(7)<<class_A[i].id_number;
			cout<<setw(6)<<class_A[i].en_score<<setw(6)<<class_A[i].math_score;
			cout<<endl;
		}
	system("pause");
}
