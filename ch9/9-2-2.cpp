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
	
	void Walking(){cout<<" ���B�o�I";}
	void Feeding(){cout<<" �Y���o�I";}
	void Barking(){cout<<" �L�L...";}
};

main(){
	Dog Pipi;
	int x;
	float y;
	
	cout<<"�п�J�z���d�����~�֡G";
	cin>>x;
	Pipi.SetAge(x);
	cout<<"�п�J�z���d�����魫�G";
	cin>>y;
	Pipi.SetWeight(y);
	cout<<"�п�J�z���d���������G";
	cin>>Pipi.breed;
	cout<<"Pipi �O�@���魫 "<<Pipi.GetWeight()<<"���� ";
	cout<<Pipi.GetAge()<<"���j��"<<Pipi.breed<<endl;
	cout<<"Pipi";
	Pipi.Feeding();
	Pipi.Barking();
	cout<<endl<<"Pipi";
	Pipi.Walking();
	Pipi.Barking();
	cout<<endl;
	system("pause");
}
