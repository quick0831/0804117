#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	//line
	cout<<endl;
	cout<<"A Simple Line"<<endl;
	cout<<setw(16)<<"/"<<endl;
	cout<<setw(15)<<"/"<<endl;
	cout<<setw(14)<<"/"<<endl;
	cout<<setw(13)<<"/"<<endl;
	cout<<setw(12)<<"/"<<endl;
	cout<<setw(11)<<"/"<<endl;
	cout<<setw(10)<<"/"<<endl;
	cout<<setw(9)<<"/"<<endl;
	cout<<setw(8)<<"/"<<endl;
	cout<<setw(7)<<"/"<<endl;
	cout<<setw(6)<<"/"<<endl;
	cout<<setw(5)<<"/"<<endl;
	cout<<setw(4)<<"/"<<endl;
	cout<<setw(3)<<"/"<<endl;
	cout<<setw(2)<<"/"<<endl;
	cout<<"/"<<endl;
	for(int i = 1; i <= 16; i++)
		cout<<setw(i)<<"\\"<<endl;
	cout<<endl;
	
	//right triangle
	cout<<"A Simple Right Triangle"<<endl;
	cout<<setw(8)<<"*"<<endl;
	cout<<setw(8)<<"**"<<endl;
	cout<<setw(8)<<"***"<<endl;
	cout<<setw(8)<<"****"<<endl;
	cout<<setw(8)<<"*****"<<endl;
	cout<<setw(8)<<"******"<<endl;
	cout<<setw(8)<<"*******"<<endl;
	cout<<setw(8)<<"********"<<endl;
	cout<<endl;
	
	//bigger
	int size=16;
	for(int i = 1; i <= size; i++){
		for(int j = 0; j < i; j++)
			cout<<"*";
		cout<<endl;
	}
	
	cout<<endl;
	
	//za warudo
	system("pause");
	
	return 0;
}
