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
		{"蔡伊林",105201,80,80,90,80,90},{"周杰輪",105202,80,60,50,60,60},
		{"蕭勁騰",105203,90,90,60,90,60},{"楊呈琳",105204,60,50,50,60,60},
		{"林依辰",105205,80,70,70,80,60}
	};
	for(i=0;i<5;i++)
		class_A[i].sum=class_A[i].ch_score+class_A[i].en_score
			+class_A[i].math_score+class_A[i].nr_score+class_A[i].soc_score;
	cout<<endl<<setw(40)<<"===== 原始學生成績單 ====="<<endl;
	cout<<setw(8)<<"姓名"<<setw(7)<<"學號";
	cout<<setw(6)<<"國文"<<setw(6)<<"英文"<<setw(6)<<"數學";
	cout<<setw(6)<<"自然"<<setw(6)<<"社會"<<endl;
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
	cout<<endl<<setw(40)<<"===== 排序後學生成績單 ====="<<endl;
	cout<<setw(8)<<"姓名"<<setw(7)<<"學號";
	cout<<setw(6)<<"國文"<<setw(6)<<"英文"<<setw(6)<<"數學";
	cout<<setw(6)<<"自然"<<setw(6)<<"社會"<<setw(6)<<"總分"<<setw(6)<<"名次"<<endl;
	for(i=0;i<5;i++){
		cout<<setw(8)<<class_A[i].chinese_name<<setw(7)<<class_A[i].id_number;
		cout<<setw(6)<<class_A[i].ch_score<<setw(6)<<class_A[i].en_score;
		cout<<setw(6)<<class_A[i].math_score<<setw(6)<<class_A[i].nr_score;
		cout<<setw(6)<<class_A[i].soc_score<<setw(6)<<class_A[i].sum;
		cout<<setw(6)<<class_A[i].rank<<endl;
	}
	
	system("pause");
}
