#include <iostream>
#include <iomanip>
using namespace std;

main(){
	unsigned int count=0;
	double thick;
	cout<<"請輸入紙的厚度(公分)：";
	cin>>thick;
	thick=thick/1000000000;
	while(thick<40){
		count++;
		thick*=2;
	}
	cout<<"紙一共要折 "<<count<<" 次"<<endl;
	cout<<"總厚度為 "<<thick<<" 萬公里"<<endl;
	system("pause");
}
