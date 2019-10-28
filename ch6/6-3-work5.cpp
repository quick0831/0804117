#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

main(){
	int input,i,j,total=1,sqrt_i;
	//const short store_prime_range=168;
	//short prime[store_prime_range],last=2;
	bool isPrime;
	cout<<"請輸入一個數字：";
	cin>>input;
	cout<<setw(12)<<2;
	for(i=3;i<=input;i+=2){
		sqrt_i=sqrt(i);
		if(sqrt_i*sqrt_i==i)
			isPrime=false;
		else
			isPrime=true;
		for(j=2;j<=sqrt_i && isPrime;j++)
			if(i%j==0)
				isPrime=false;
		/* 
		for(j=0;j<store_prime_range && j<total;j++){
			if(i%prime[j]==0)
				isPrime=false;
		}
		for(j=last+1;j<=sqrt_i && isPrime;j++)
			if(i%j==0)
				isPrime=false;
		*/ 
		if(isPrime==true){
			cout<<setw(12)<<i;
			/* 
			if(total<store_prime_range){
				prime[total]=i;
				last=i;
			}*/ 
			total++;
		}
	}
	cout<<endl<<"共"<<total<<"個質數"<<endl; 
	system("pause");
}
