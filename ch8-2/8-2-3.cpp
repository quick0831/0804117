#include <iostream>
#include <iomanip>
using namespace std;
const double pi=3.141595265358979323846264338327950288419716939;
float Area(float bottom, float height);
float Area(float top, float bottom, float height);
float Area(float radius);

main(){
	float height,top,bottom,radius;
	cout<<"�Ш̧ǿ�J�T���Ϊ����B���G";
	cin>>bottom>>height;
	cout<<"�T���Ϊ����n���G"<<Area(bottom,height)<<endl<<endl;
	cout<<"�Ш̧ǿ�J��Ϊ��W���B�U���B���G";
	cin>>top>>bottom>>height;
	cout<<"��Ϊ����n���G"<<Area(top,bottom,height)<<endl<<endl;
	cout<<"�п�J��Ϊ��b�|�G";
	cin>>radius;
	cout<<"��Ϊ����n���G"<<Area(radius)<<endl<<endl;
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
