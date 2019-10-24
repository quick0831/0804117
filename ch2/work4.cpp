#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;

main()
{
	int i,sum,v1,v2,v3,v4,v5;
	
	v1=3;sum=0;
	v2=v1++;
	v3=++v2;
	v4=v3--;
	v5=--v4;
	for(i=0;i<10;i++){
		sum=sum+i;
		cout<<sum<<" "<<i<<endl;
	}
	system("pause");
}
