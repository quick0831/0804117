#include <iostream>
#include <iomanip>
using namespace std;
int fac(int n);

main(){
	int d,answer;
	
	cout<<"�п�J�@�Ӿ��n(n>0)�G";
	cin>>d;
	answer=fac(d);
	cout<<"���� "<<d<<"!="<<answer<<endl;
	system("pause"); 
}

int fac(int n){
	if(n==0)
		return 1;
	else
		return n*fac(n-1);
}
