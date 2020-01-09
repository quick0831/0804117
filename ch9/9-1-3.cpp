#include <iostream>
#include <iomanip>
using namespace std;

struct Polynomial{
	int coeff;
	int expon;
};

void Sub(Polynomial *a, Polynomial *b, int n, char opr){
	int j;
	Polynomial *C=new Polynomial[n+1];
	
	for(j=n;j>=0;j--){
		if(opr=='+') C[j].coeff=a[j].coeff+b[j].coeff;
		if(opr=='-') C[j].coeff=a[j].coeff-b[j].coeff;
		C[j].expon=j;
		if(C[j].coeff!=0){
			if(C[j].coeff>0) cout<<"+";
			cout<<C[j].coeff;
			if(C[j].expon!=0) cout<<"X^"<<C[j].expon; 
		}
	}
}

main(){
	cout<<"===== �h�������B�� ====="<<endl;
	int i,max,degree_1,degree_2;
	cout<<"�п�J�h���� 1 ������(Degree)���G";
	cin>>degree_1;
	cout<<"�п�J�h���� 2 ������(Degree)���G";
	cin>>degree_2;
	if(degree_1>degree_2)
		max=degree_1;
	else
		max=degree_2;
	Polynomial *A=new Polynomial[max+1];
	Polynomial *B=new Polynomial[max+1];
	
	cout<<endl<<"�п�J�h���� 1 ���U�����ƪ��Y�ơI"<<endl;
	for(i=max;i>=0;i--){
		cout<<"X^"<<i<<" ���Y�Ƭ��G";
		cin>>A[i].coeff;
		A[i].expon=i;
	}
	
	cout<<endl<<"�п�J�h���� 2 ���U�����ƪ��Y�ơI"<<endl;
	for(i=max;i>=0;i--){
		cout<<"X^"<<i<<" ���Y�Ƭ��G";
		cin>>B[i].coeff;
		B[i].expon=i;
	}
	
	cout<<endl<<"��h�����ۥ[�����G���G"<<endl;
	Sub(A,B,max,'+');
	cout<<endl<<endl<<"��h�����۴���G���G"<<endl;
	Sub(A,B,max,'-');
	cout<<endl<<endl;
	system("pause");
}
