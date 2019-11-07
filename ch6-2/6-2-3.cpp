#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int n,k=1;
	unsigned long long int fac=1;
	
	cout<<"Please input a natural number : ";
	cin>>n;
	do{
		fac*=k++;
	}while(k<=n);
	cout<<n<<"!"<<" = "<<fac<<endl;
	system("pause");
}
