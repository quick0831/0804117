#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int print_bin(int n);

main(){
	int count=0;
	int n[4],temp;
	srand((unsigned int)time(NULL));rand();
	for(int i=0;i<4;i++){
		n[i]=rand()%40+1;
		for(int j=0;j<i;j++)
			if(n[i]==n[j]){
				i--;
				break;
			}
	}
	for(int i=0;i<3;i++)
		for(int j=i+1;j<4;j++)
			if(n[i]>n[j]){
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
	cout<<"原始資料：";
	temp=1;
	for(int i=0;i<4;i++){
		for(int j=temp;j<n[i];j++)
			cout<<0;
		cout<<1;
		temp=n[i]+1;
	}
	for(int i=n[3]+1;i<=40;i++)
		cout<<0;
	cout<<endl<<"壓縮資料：";
	temp=1;
	for(int i=0;i<4;i++){
		count+=print_bin(n[i]-temp);
		cout<<"_";
		count++;
		temp=n[i]+1;
	}
	count+=print_bin(40-n[3]);
	cout<<endl<<"壓縮率："<<(float)count*100/40<<"%"<<endl;
	system("pause");
}

int print_bin(int n){
	if(n==0) return 0;
	int count=0;
	long long int temp=1,bin=0;
	while(n!=0){
		bin=bin+(n%2)*temp;
		n=n/2;
		temp=temp*10;
		count++;
	}
	cout<<bin;
	return count;
}
