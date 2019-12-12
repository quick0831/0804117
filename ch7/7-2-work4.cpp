#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int i,n;
	
	cout<<"½Ð¿é¤Jn­È¡G";
	cin>>n;
	
	int *f=new int[n];
	*f=0;
	*(f+1)=1;
	
	for(i=2;i<=n;i++)
		*(f+i)=*(f+i-1)+*(f+i-2);
	
	for(i=0;i<=n;i++)
		cout<<"f("<<i<<")="<<*(f+i)<<endl;
	system("pause");
}
