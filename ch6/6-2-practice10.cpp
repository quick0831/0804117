#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int w,h;
	cout<<"�Ш̧ǿ�J���𪺼e�׻P���סG";
	cin>>w>>h;
	cout<<" ";
	for(int i=1; i<=w; i++)
		cout<<i%10;
	cout<<endl<<"1";
	//long wall No1
	for(int i=1; i<=w; i++)
		cout<<"*";
	cout<<endl;
	for(int i=2; i<h; i++){
		cout<<i%10<<"*";
		for(int i=2; i<w; i++)
			cout<<" ";
		cout<<"*"<<endl;
	}
	if(h!=1){
		cout<<h%10;
		//long wall No2
		for(int i=1; i<=w; i++)
			cout<<"*";
	}
}
