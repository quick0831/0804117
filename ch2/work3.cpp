#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int s,length,width,height,top,bottom,radius;
	const float pi=3.141592653589793238462643383279502884197f;
	bool loop=true;
	while(loop){
		cout<<"幾何圖形面積求解"<<endl;
		cout<<"[(1)直角三角形、(2)梯形、(3)圓形、(4)離開]：";
		cin>>s;
		if(s==1){
			cout<<"請依序輸入三角形的底、高：";
			cin>>bottom>>height;
			cout<<"三角形的面積為："<<(bottom*height/2)<<endl;
		}
		else if(s==2){
			cout<<"請依序輸入梯形的上底、下底、高：";
			cin>>top>>bottom>>height;
			cout<<"梯形面積為："<<((top+bottom)*height/2)<<endl;
		}
		else if(s==3){
			cout<<"請輸入圓形的半徑：";
			cin>>radius;
			cout<<"圓形面積為："<<(pi*radius*radius)<<endl; 
		}
		else
			loop=false;
		cout<<endl;
	}
	system("pause");
}
