#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int i,j;
	for(i=2;i<10;i++){
		for(j=2;i>=j;j++)
			cout<<" "<<i<<"x"<<j<<"="<<setw(2)<<i*j;
		cout<<endl;
	}
}
