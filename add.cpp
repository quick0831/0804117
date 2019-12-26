#include <iostream>
#include <iomanip>
using namespace std;

int add(int a,int b){
	if(b<=0)
		return a;
	else
		return add(a,b-1)+1;
}

main(){
	cout<<add(10,100)<<endl;
	system("pause");
} 
