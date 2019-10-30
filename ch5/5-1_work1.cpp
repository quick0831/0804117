#include <iostream>  //前置作業
#include <iomanip>  //前置作業
using namespace std;  //更多前置作業

// Solve for f(x)=ax^2+bx+c

main(){
	int ans,a,b,c,x,y;  //定義變數
	bool loop1=true,loop2,loop3;  //定義迴圈控制變數
	while(loop1){  //第一層迴圈
		cout<<"(1)求頂點、(2)測座標、(0)離開"<<endl;  //輸出功能資訊
		cin>>ans;  //接收輸入
		loop2=true;  //初始化第二層迴圈
		if(ans==0) loop1=false;  //離開迴圈
		if(ans==1){  //求頂點
			while(loop2){  //第二層迴圈
				cout<<"f(x)=ax^2+bx+c";  //顯示輸入格式
				cout<<"請輸入a,b,c (輸入0以跳出)"<<endl;  //顯示輸入格式
				cin>>a;  //接收第一個輸入
				if(a==0) loop2=false;  //離開迴圈
				else{  //繼續執行
					cin>>b>>c;  //繼續接收輸入
					cout<<"("<<(-b/2/float(a))<<","<<(c-b*b/4/float(a))<<")"<<endl;  //輸出
				}
			}
		}
		if(ans==2){  //測座標
			while(loop2){  //第二層迴圈
				cout<<"f(x)=ax^2+bx+c";  //顯示輸入格式
				cout<<"請輸入a,b,c (輸入0以跳出)"<<endl;  //顯示輸入格式
				cin>>a;  //接收第一個輸入
				if(a==0) loop2=false;  //離開迴圈
				else{  //繼續執行
					cin>>b>>c;  //繼續接收輸入
					loop3=true;  //初始化第三層迴圈
					while(loop3){  //第三層迴圈
						cout<<"請輸入座標 (輸入100以跳出)"<<endl;  //顯示輸入格式
						cin>>x;  //接收輸入
						if(x==100) loop3=false;  //離開迴圈
						else{  //繼續執行
							cin>>y;  //繼續接收輸入
							if((a*x*x+b*x+c)==y) cout<<"是"<<endl;  //輸出
							else cout<<"否"<<endl;  //輸出
						}
					}
				}
			}
		}
	}
}
