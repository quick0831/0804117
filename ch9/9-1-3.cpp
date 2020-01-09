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
	cout<<"===== 多項式的運算 ====="<<endl;
	int i,max,degree_1,degree_2;
	cout<<"請輸入多項式 1 的次方(Degree)為：";
	cin>>degree_1;
	cout<<"請輸入多項式 2 的次方(Degree)為：";
	cin>>degree_2;
	if(degree_1>degree_2)
		max=degree_1;
	else
		max=degree_2;
	Polynomial *A=new Polynomial[max+1];
	Polynomial *B=new Polynomial[max+1];
	
	cout<<endl<<"請輸入多項式 1 之各項指數的係數！"<<endl;
	for(i=max;i>=0;i--){
		cout<<"X^"<<i<<" 的係數為：";
		cin>>A[i].coeff;
		A[i].expon=i;
	}
	
	cout<<endl<<"請輸入多項式 2 之各項指數的係數！"<<endl;
	for(i=max;i>=0;i--){
		cout<<"X^"<<i<<" 的係數為：";
		cin>>B[i].coeff;
		B[i].expon=i;
	}
	
	cout<<endl<<"兩多項式相加的結果為："<<endl;
	Sub(A,B,max,'+');
	cout<<endl<<endl<<"兩多項式相減的結果為："<<endl;
	Sub(A,B,max,'-');
	cout<<endl<<endl;
	system("pause");
}
