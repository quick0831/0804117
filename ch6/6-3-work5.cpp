#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

main(){
	int input,i,j,total;
	cout<<"�п�J�@�ӼƦr�G";
	cin>>input;
	for(i=2;i<=input;i++){
		bool isPrime=true;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0) isPrime=false;
		}
		if(isPrime==true){
			cout<<setw(12)<<i;
			total++;
		}
	}
	cout<<endl<<"�@"<<total<<"�ӽ��"<<endl; 
	system("pause");
}
