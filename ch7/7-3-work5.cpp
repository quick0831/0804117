#include <iostream>
#include <iomanip>
using namespace std;

void swap(int &a, int &b){
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
}

main(){
	int n[5]={44,22,55,11,33};
	int *p=n;
	cout<<"Input :";
	for(int i=0;i<5;i++)
		cout<<setw(4)<<*(p+i);
	for(int i=0;i<4;i++)
		for(int j=0;j<4-i;j++)
			swap(*(p+j),*(p+j+1));
	cout<<endl<<"Output:";
	for(int i=0;i<5;i++)
		cout<<setw(4)<<*(p+i);
}
