#include <iostream>
#include <iomanip>
using namespace std;
float det(float a[2], float b[2]){return (float)a[0]*b[1]-a[1]*b[0];}

main(){
	float a[2],b[2],c[2];
	float d,dx,dy;
	float x,y;
	
	cout<<"�п�J�G���@����{���Y�ơG"<<endl;
	cin>>a[0]>>b[0]>>c[0];
	cin>>a[1]>>b[1]>>c[1];
	d=det(a,b);
	dx=det(c,b);
	dy=det(a,c);
	
	if(d!=0){
		x=dx/d;
		y=dy/d;
		cout<<"��{�����ߤ@��";
		cout<<"(x="<<x<<"�Ay="<<y<<")"<<endl;
	}
	else if(dx==0 && dy==0)
		cout<<"�L���h��"<<endl;
	else
		cout<<"�L��"<<endl;
	system("pause");
}
