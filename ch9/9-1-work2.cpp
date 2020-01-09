#include <iostream>
#include <iomanip>
using namespace std;

struct Polynomial{
	int coeff;
	int expon;
};

void Sub(Polynomial *a, Polynomial *b, int deg1, int deg2, char opr){
	int i,j;
	if(opr=='*'){
		Polynomial *C=new Polynomial[deg1+deg2+1];
		for(i=deg1+deg2;i>=0;i--){
			C[i].expon=i;
			C[i].coeff=0;
		}
		for(i=0;i<=deg1;i++)
			for(j=0;j<=deg2;j++)
				C[i+j].coeff+=a[i].coeff*b[j].coeff;
		//print out the polynomial
		for(i=deg1+deg2;i>=0;i--){
			if(C[i].coeff!=0){
				if(C[i].coeff>0) cout<<"+";
				cout<<C[i].coeff;
				if(C[i].expon!=0) cout<<"X^"<<C[i].expon; 
			}
		}
	}
}

main(){
	cout<<"===== �h�������B�� ====="<<endl;
	int i,degree_1,degree_2;
	cout<<"�п�J�h���� 1 ������(Degree)���G";
	cin>>degree_1;
	cout<<"�п�J�h���� 2 ������(Degree)���G";
	cin>>degree_2;
	Polynomial *A=new Polynomial[degree_1+1];
	Polynomial *B=new Polynomial[degree_2+1];
	
	cout<<endl<<"�п�J�h���� 1 ���U�����ƪ��Y�ơI"<<endl;
	for(i=degree_1;i>=0;i--){
		cout<<"X^"<<i<<" ���Y�Ƭ��G";
		cin>>A[i].coeff;
		A[i].expon=i;
	}
	
	cout<<endl<<"�п�J�h���� 2 ���U�����ƪ��Y�ơI"<<endl;
	for(i=degree_2;i>=0;i--){
		cout<<"X^"<<i<<" ���Y�Ƭ��G";
		cin>>B[i].coeff;
		B[i].expon=i;
	}
	cout<<endl<<"��h�����ۭ������G���G"<<endl;
	Sub(A,B,degree_1,degree_2,'*');
	cout<<endl<<endl;
	system("pause");
}
