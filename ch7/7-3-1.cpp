#include <iostream>
#include <iomanip>
using namespace std;

main(){
	// a=average s=sum
	double xa=0,ya=0,m,b; // y=mx+b
	int sx=0,sy=0,sx2=0,sxy=0;
	int temp,i,j,len;
	cout<<"請輸入資料點數：";
	cin>>len;
	int *x=new int[len];
	int *y=new int[len];
	for(i=0;i<len;i++){
		cout<<"請輸入第 "<<i+1<<" 筆資料：";
		cin>>*(x+i)>>*(y+i);
		sx=sx+*(x+i);
		sy=sy+*(y+i);
		sx2=sx2+(*(x+i) * *(x+i));
		sxy=sxy+(*(x+i) * *(y+i));
	}
	xa=sx/len;
	ya=sy/len;
	m=(sxy-sx*ya)/(sx2-sx*xa);
	b=ya-m*xa;
	cout<<"y = "<<m<<" x + "<<b;
}
