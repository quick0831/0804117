#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int v1=2;
	float v2;
	double v3;
	
	cout<<"�п�J�@�ӧt���p���I�@�쪺��ơG";
	cin>>v2;
	v3=v1+v2;
	cout<<"��Ƭۥ[�����G���G"<<v3<<endl;
	v1=(int) v2;
	cout<<"��� "<<v2<<" �L����˱󤧫᪺�� = "<<v1<<endl;
	v1=int(v2+0.5);
	cout<<"��� "<<v2<<" �|�ˤ��J���᪺�� = "<<v1<<endl; 
	system("pause");
}
