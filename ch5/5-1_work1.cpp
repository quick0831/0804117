#include <iostream>  //�e�m�@�~
#include <iomanip>  //�e�m�@�~
using namespace std;  //��h�e�m�@�~

// Solve for f(x)=ax^2+bx+c

main(){
	int ans,a,b,c,x,y;  //�w�q�ܼ�
	bool loop1=true,loop2,loop3;  //�w�q�j�鱱���ܼ�
	while(loop1){  //�Ĥ@�h�j��
		cout<<"(1)�D���I�B(2)���y�СB(0)���}"<<endl;  //��X�\���T
		cin>>ans;  //������J
		loop2=true;  //��l�ƲĤG�h�j��
		if(ans==0) loop1=false;  //���}�j��
		if(ans==1){  //�D���I
			while(loop2){  //�ĤG�h�j��
				cout<<"f(x)=ax^2+bx+c";  //��ܿ�J�榡
				cout<<"�п�Ja,b,c (��J0�H���X)"<<endl;  //��ܿ�J�榡
				cin>>a;  //�����Ĥ@�ӿ�J
				if(a==0) loop2=false;  //���}�j��
				else{  //�~�����
					cin>>b>>c;  //�~�򱵦���J
					cout<<"("<<(-b/2/float(a))<<","<<(c-b*b/4/float(a))<<")"<<endl;  //��X
				}
			}
		}
		if(ans==2){  //���y��
			while(loop2){  //�ĤG�h�j��
				cout<<"f(x)=ax^2+bx+c";  //��ܿ�J�榡
				cout<<"�п�Ja,b,c (��J0�H���X)"<<endl;  //��ܿ�J�榡
				cin>>a;  //�����Ĥ@�ӿ�J
				if(a==0) loop2=false;  //���}�j��
				else{  //�~�����
					cin>>b>>c;  //�~�򱵦���J
					loop3=true;  //��l�ƲĤT�h�j��
					while(loop3){  //�ĤT�h�j��
						cout<<"�п�J�y�� (��J100�H���X)"<<endl;  //��ܿ�J�榡
						cin>>x;  //������J
						if(x==100) loop3=false;  //���}�j��
						else{  //�~�����
							cin>>y;  //�~�򱵦���J
							if((a*x*x+b*x+c)==y) cout<<"�O"<<endl;  //��X
							else cout<<"�_"<<endl;  //��X
						}
					}
				}
			}
		}
	}
}
