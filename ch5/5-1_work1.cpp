#include <iostream>
#include <iomanip>
using namespace std;

// Solve for f(x)=ax^2+bx+c

main(){
	int ans,a,b,c,x,y;
	bool loop1=true,loop2,loop3;
	while(loop1){
		cout<<"(1)�D���I�B(2)���y�СB(0)���}"<<endl;
		cin>>ans;
		loop2=true;
		if(ans==0) loop1=false;
		if(ans==1){ //�D���I
			while(loop2){
				cout<<"f(x)=ax^2+bx+c";
				cout<<"�п�Ja,b,c (��J0�H���X)"<<endl;
				cin>>a;
				if(a==0) loop2=false;
				else{
					cin>>b>>c;
					cout<<"("<<(-b/2/float(a))<<","<<(c-b*b/4/float(a))<<")"<<endl;
				}
			}
		}
		if(ans==2){ //���y��
			while(loop2){
				cout<<"f(x)=ax^2+bx+c";
				cout<<"�п�Ja,b,c (��J0�H���X)"<<endl;
				cin>>a;
				if(a==0) loop2=false;
				else{
					cin>>b>>c;
					loop3=true;
					while(loop3){
						cout<<"�п�J�y�� (��J100�H���X)"<<endl;
						cin>>x;
						if(x==100) loop3=false;
						else{
							cin>>y;
							if((a*x*x+b*x+c)==y) cout<<"�O"<<endl;
							else cout<<"�_"<<endl;
						}
					}
				}
			}
		}
	}
}
