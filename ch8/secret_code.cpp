#include <iostream>  // �פJ���Y�� iostream
#include <iomanip>  // �פJ���Y�� iomanip
#include <cstdlib>  // �פJ���Y�� cstdlib
#include <ctime>  // �פJ���Y�� ctime
using namespace std;  // �ŧi�R�W�Ŷ� std
// �@�I�Ŷ�
main(){  // �D���
	int code,input,high=100,low=1;  // �w�q����ܼ�
	srand((unsigned int)time(NULL)); rand();  // ��l�ƶü�
	for(int i=0;i<rand()/10;i++) rand();  // �~��~�ü�
	code=rand()%(high-low-1)+low+1;  // �üƨM�w�׷��K�X
	cout<<"+--------------+"<<endl;  // ��
	cout<<"|              |"<<endl;  // ��
	cout<<"|  ��          |"<<endl;  // ��
	cout<<"|        �K    |"<<endl;  // ��
	cout<<"|    ��        |"<<endl;  // �K
	cout<<"|          �X  |"<<endl;  // �X
	cout<<"|              |"<<endl;  // ��
	cout<<"+--------------+"<<endl;  // ��
	cout<<endl;                      // ��
	cout<<"�O�_�n��ܲ׷��K�X�H"<<endl;  // ��ܥ\���T
	cout<<"(1)�O (2)�_      -> ";  // ��ܿﶵ
	cin>>input;  // ������J
	cout<<endl;  // ����
	if(input==1) cout<<"�׷��K�X���G"<<code<<endl;  // ��X�׷��K�X
	while(true){  // �j��
		cout<<"�а��X�z���q���G";  // ���ܤ�r
		cin>>input;  // ������J
		if(input<
			cout<<"�׷��K�X�b "<<low<<" ~ "<<high<<" ����"<<endl;  // ��ܽu��
			if(high-low==2) break;  // �P�_�O�_�u�Ѥ@�إi�൪��
		}else{  // �_�h
			cout<<"��J���~�A�Э���"<<endl;  // ���~�T��
		}  // �����P�_
	}  // �����j��
	cout<<endl<<"�C�������A�׷��K�X���G"<<code<<endl<<endl;  // ��ܲ׷��K�X
	system("pause");  // �Ȱ������A��K�ϥΪ̾\Ū
}  // �{������
