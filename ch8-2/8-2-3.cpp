#include <iostream>
#include <iomanip>
using namespace std;
const double pi=3.141595265358979323846264338327950288419716939;
float Area(float bottom, float height);
float Area(float top, float bottom, float height);
float Area(float radius);

main(){
	float height,top,bottom,radius;
	cout<<"請依序輸入三角形的底、高：";
	cin>>bottom>>height;
	cout<<"三角形的面積為："<<Area(bottom,height)<<endl<<endl;
	cout<<"請依序輸入梯形的上底、下底、高：";
	cin>>top>>bottom>>height;
	cout<<"梯形的面積為："<<Area(top,bottom,height)<<endl<<endl;
	cout<<"請輸入圓形的半徑：";
	cin>>radius;
	cout<<"圓形的面積為："<<Area(radius)<<endl<<endl;
	system("pause");
}

float Area(float bottom, float height){
	return bottom*height/2.0;
}
float Area(float top, float bottom, float height){
	return (top+bottom)*height/2.0;
}
float Area(float radius){
	return pi*radius*radius;
}
