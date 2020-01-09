#include <iostream>
#include <iomanip>
using namespace std;

class Dog{
	private:
		int age;
		float weight;
	public:
		char breed[10];
	void SetAge(int a){age=a;}
	int GetAge(){return age;}
	void SetWeight(float b){weight=b;}
	float GetWeight(){return weight;}
	
	void Walking(){cout<<" 散步囉！";}
	void Feeding(){cout<<" 吃飯囉！";}
	void Barking(){cout<<" 汪汪...";}
};

main(){
	Dog Pipi;
	int x;
	float y;
	
	cout<<"請輸入您的寵物的年齡：";
	cin>>x;
	Pipi.SetAge(x);
	cout<<"請輸入您的寵物的體重：";
	cin>>y;
	Pipi.SetWeight(y);
	cout<<"請輸入您的寵物的種類：";
	cin>>Pipi.breed;
	cout<<"Pipi 是一隻體重 "<<Pipi.GetWeight()<<"公斤 ";
	cout<<Pipi.GetAge()<<"歲大的"<<Pipi.breed<<endl;
	cout<<"Pipi";
	Pipi.Feeding();
	Pipi.Barking();
	cout<<endl<<"Pipi";
	Pipi.Walking();
	Pipi.Barking();
	cout<<endl;
	system("pause");
}
