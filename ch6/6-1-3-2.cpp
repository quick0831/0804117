#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int score;
	
	cout<<"Enter Score:";
	cin>>score;
	if(score>=90)
		cout<<"You got an A!"<<endl;
	else if(score>=80)
		cout<<"You got an B!"<<endl;
	else if(score>=70)
		cout<<"You got an C!"<<endl;
	else if(score>=60)
		cout<<"You got an D!"<<endl;
	else
		cout<<"You got an F"<<endl;
	system("pause");
} 
