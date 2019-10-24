#include <iostream>
#include <iomanip>
using namespace std;

// Solve for f(x)=ax^2+bx+c

main(){
	int ans,a,b,c,x,y;
	bool loop1=true,loop2,loop3;
	while(loop1){
		cout<<"(1)求頂點、(2)測座標、(0)離開"<<endl;
		cin>>ans;
		loop2=true;
		if(ans==0) loop1=false;
		if(ans==1){ //求頂點
			while(loop2){
				cout<<"f(x)=ax^2+bx+c";
				cout<<"請輸入a,b,c (輸入0以跳出)"<<endl;
				cin>>a;
				if(a==0) loop2=false;
				else{
					cin>>b>>c;
					cout<<"("<<(-b/2/float(a))<<","<<(c-b*b/4/float(a))<<")"<<endl;
				}
			}
		}
		if(ans==2){ //測座標
			while(loop2){
				cout<<"f(x)=ax^2+bx+c";
				cout<<"請輸入a,b,c (輸入0以跳出)"<<endl;
				cin>>a;
				if(a==0) loop2=false;
				else{
					cin>>b>>c;
					loop3=true;
					while(loop3){
						cout<<"請輸入座標 (輸入100以跳出)"<<endl;
						cin>>x;
						if(x==100) loop3=false;
						else{
							cin>>y;
							if((a*x*x+b*x+c)==y) cout<<"是"<<endl;
							else cout<<"否"<<endl;
						}
					}
				}
			}
		}
	}
}
