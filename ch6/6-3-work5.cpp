#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

main(){
	int input,i,j,total=1;
	cout<<"�п�J�@�ӼƦr�G";
	cin>>input;
	cout<<setw(12)<<2;
	for(i=3;i<=input;i+=2){
		bool isPrime=true;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				isPrime=false;
				break;
			}
		}
		if(isPrime==true){
			cout<<setw(12)<<i;
			total++;
		}
	}
	cout<<endl<<"�@"<<total<<"�ӽ��"<<endl; 
	system("pause");
}
