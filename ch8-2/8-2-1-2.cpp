#include <iostream>
#include <iomanip>
using namespace std;

long long int p(int n,int r){
	long long int temp=1;
	for(int i=(n-r+1);i<=n;i++)
		temp*=i;
	return temp;
}

long long int fac(int n){
	return p(n,n);
}

long long int c(int n,int r){
	if(r>n/2) r=n-r;
	return p(n,r)/fac(r);
}

main(){
	long long int combination;
	
	combination=c(4,2)*c(3,1)*c(5,2);
	cout<<"上場組合共有"<<combination<<"種"<<endl;
	system("pause");
}
