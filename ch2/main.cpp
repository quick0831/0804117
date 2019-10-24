#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;

main()
{
	system("color 0a");
	int v1,v2,temp;
	v1=12;v2=36;
	cout<<"Before Swap : v1="<<v1<<", and v2="<<v2<<"."<<endl;
	temp=v2;
	v2=v1;
	v1=temp;
	cout<<"After  Swap : v1="<<v1<<", and v2="<<v2<<"."<<endl;
	system("pause");
}
