#include <iostream>
#include <iomanip>
using namespace std;

int x,y;

void Sub_A(){
	int x,y;
	x=0;y=0;
	cout<<"Sub_A()中的資料為：x = "<<x<<"，記憶體位址 = "<<&x<<endl;
	cout<<"Sub_A()中的資料為：y = "<<y<<"，記憶體位址 = "<<&y<<endl;
}

void Sub_B(){
	x=0;y=0;
	cout<<"Sub_B()中的資料為：x = "<<x<<"，記憶體位址 = "<<&x<<endl;
	cout<<"Sub_B()中的資料為：y = "<<y<<"，記憶體位址 = "<<&y<<endl;
}

main(){
	cout<<"請輸入任意兩個整數：";
	cin>>x>>y;
	cout<<"main 程式的資料為：x = "<<x<<"，記憶體位址 = "<<&x<<endl;
	cout<<"main 程式的資料為：y = "<<y<<"，記憶體位址 = "<<&y<<endl<<endl;
	Sub_A(); 
	cout<<"main 程式的資料為：x = "<<x<<"，記憶體位址 = "<<&x<<endl;
	cout<<"main 程式的資料為：y = "<<y<<"，記憶體位址 = "<<&y<<endl<<endl;
	Sub_B();
	cout<<"main 程式的資料為：x = "<<x<<"，記憶體位址 = "<<&x<<endl;
	cout<<"main 程式的資料為：y = "<<y<<"，記憶體位址 = "<<&y<<endl<<endl;
	system("pause");
}
