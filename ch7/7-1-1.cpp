#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int student[10]={36,89,94,69,81,73,5,54,100,64};
	int max=0;
	int min=100;
	int avg=0;
	for(int i=0;i<10;i++){
		if(student[i]>max) max=student[i];
		if(student[i]<min) min=student[i];
		avg=avg+student[i];
	}
	avg=avg/10;
	cout<<"�̰������G"<<max<<endl;
	cout<<"�̧C�����G"<<min<<endl;
	cout<<"�������ơG"<<avg<<endl<<endl;
	system("pause");
} 
