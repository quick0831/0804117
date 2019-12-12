#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int student[10]={80,90,60,40,80,20,70,60,70,60};
	int *p=student;
	for(int i=0;i<10;i++)
		cout<<"student["<<i<<"] 的位址 "<<(p+i)
		<<"，佔 "<<sizeof*(p+i)<<"Bytes，數值為 "<<*(p+i)<<endl;
	system("pause");
}
