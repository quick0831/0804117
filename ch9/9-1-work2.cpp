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
	cout<<"===== 多項式的運算 ====="<<endl;
	int i,degree_1,degree_2;
	cout<<"請輸入多項式 1 的次方(Degree)為：";
	cin>>degree_1;
	cout<<"請輸入多項式 2 的次方(Degree)為：";
	cin>>degree_2;
	Polynomial *A=new Polynomial[degree_1+1];
	Polynomial *B=new Polynomial[degree_2+1];
	
	cout<<endl<<"請輸入多項式 1 之各項指數的係數！"<<endl;
	for(i=degree_1;i>=0;i--){
		cout<<"X^"<<i<<" 的係數為：";
		cin>>A[i].coeff;
		A[i].expon=i;
	}
	
	cout<<endl<<"請輸入多項式 2 之各項指數的係數！"<<endl;
	for(i=degree_2;i>=0;i--){
		cout<<"X^"<<i<<" 的係數為：";
		cin>>B[i].coeff;
		B[i].expon=i;
	}
	cout<<endl<<"兩多項式相乘的結果為："<<endl;
	Sub(A,B,degree_1,degree_2,'*');
	cout<<endl<<endl;
	system("pause");
}
