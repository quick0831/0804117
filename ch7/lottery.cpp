#include <iostream>  // �פJ���Y�� iostream
#include <iomanip>  // �פJ���Y�� iomanip
#include <cstdlib>  // �פJ���Y�� cstdlib
#include <ctime>  // �פJ���Y�� ctime
using namespace std;  // �ŧi�R�W�Ŷ� std
// �@�I�Ŷ�
main(){  // �D���
	int i,j,n[6],m[7],hit,temp;  // �w�q����ܼ�
	// n�O��`���X m�O�}�����X *(m+6)�O�S�O�� hit�O�����y�� 
	bool pass,loop;  //�w�q�����ܼ�
	srand((unsigned int)time(NULL)); rand();  // ��l�ƶü�
	cout<<"�j�ֳz�����C��"<<endl;  // ��ܥ\���T
	cout<<"�Ш̧ǿ�J���Ӹ��X�A�����O1~49���Ʀr�A�B���i�H���ơC"<<endl;  // ��ܥ\���T
	for(i=0;i<6;i++){  // �H�j�鱵����J
		cout<<"��"<<i+1<<"�ӼƦr�G";  // ��X�w��J���i��
		cin>>*(n+i);  // ������J
		pass=true;  // ��l���ˬd��
		for(j=0;j<i;j++)  // ���ߤ��e��J���Ʀr
			if(*(n+i)==*(n+j)){  // �p�G�e�ᦳ��Ƭ۵�
				cout<<"�w�g��J�L�o�ӼƦr�A�Э��s��J�I"<<endl;  // ���Ϳ��~�T��
				pass=false;  // �ˬd�ȳ]�����q�L
				break;  // �������X�A�`�ٮɶ�
			}  // �P�_����
		if(*(n+i)<1 || *(n+i)>49){  // �Y�ƭȤ��b�d��
			cout<<"��J���Ʀr�W�X1~49���d��A�Э��s��J�I"<<endl;  // ���Ϳ��~�T��
			pass=false;  // �ˬd�ȳ]�����q�L
		}  // �P�_����
		if(!pass) i--;  // �Y���q�L�ˬd�A�^�h����J
	}  // �����j��
	loop=true;  // ��l�ưj��
	while(loop){  // ���F�i�H�ϨϥΪ̥i���ƶ}���A�b���[�@�Ӱj��
		// ���ͤ������X(�ü�)
		for(i=0;i<=6;i++){  // ���ư���6��
			*(m+i)=rand()%49+1;  // ���ͤ@�ü�
			for(j=0;j<i;j++)  // ���ߤ��e���ͪ��Ʀr
				if(*(m+i)==*(m+j)){  // �p�G�e�ᦳ��Ƭ۵�
					i--;  // �V�e�^�h���ͦ��ü�
					break;  // �������X�A�`�ٮɶ�
				}  // �P�_����
		}  // �����j��
		// �������X�Ƨ�
		for(i=0;i<5;i++)  // ���ߤ������X(�̫�@�Ӥ���)
			for(j=0;j<5-i;j++)  // ���ߦb�䤧�e���Ʀr
				if(*(m+j) > *(m+j+1)){  // �p�G�e�̤j���̡A�h���洫�Ʀr
					temp = *(m+j);  // �N�ܼ��x�J�Ȧs�Ŷ�
					*(m+j) = *(m+j+1);  // ���ʭ�
					*(m+j+1) = temp;  // �N�Ȧs�Ŷ��ȩ�^�ܼ�
				}  // �P�_����
		// �}�� (��X�������X)
		cout<<endl<<"�����A�諸�Ʀr���G";  // ��X�U�`���X
		for(i=0;i<6;i++) cout<<setw(3)<<*(n+i);  // ��X�U�`���X
		cout<<endl<<"�����}�X�ֳz���X�G";  // ��X�������X
		for(i=0;i<6;i++) cout<<setw(3)<<*(m+i);  // ��X�������X
		cout<<"  �S�O���G "<<*(m+6)<<endl;  // ��X�S�O��
		// �P�_����
		pass=false;  // ��l�ƧP�_
		for(i=0;i<=6;i++)  // ���ߤU�`���X
			if(*(n+i)==*(m+6)){  // �Y�P�S�O���ۦP
				pass=true;  // �S�O������
				break;  // �������X�A�`�ٮɶ�
			}  // �P�_����
		hit=0;  // ��l�Ʋ֥[��(�襤���y�ơA���t�S�O��)
		for(i=0;i<=6;i++)  // ���ߤU�`���X
			for(j=0;j<6;j++)  // ���ߤ������X(���t�S�O��)
				if(*(n+i)==*(m+j)){  // �Y�U�`���X�P�������X�ۦP
					hit++;  // �襤�@�Ӽ�
					break;  // �������X�A�`�ٮɶ�
				}  // �P�_����
		if(pass){  // �p�G�����S�O��
			if(hit==2) cout<<"�A���m��";       // �p�G��2�Ӹ��X�A�h�O���m��
			else if(hit==3) cout<<"�A������";  // �p�G��3�Ӹ��X�A�h�O������
			else if(hit==4) cout<<"�A���v��";  // �p�G��4�Ӹ��X�A�h�O���v��
			else if(hit==5) cout<<"�A���L��";  // �p�G��5�Ӹ��X�A�h�O���L��
			else cout<<"�A�S����";  // �_�h�S����
		}else{  // �p�G�S���S�O��
			if(hit==3) cout<<"�A������";       // �p�G��3�Ӹ��X�A�h�O������
			else if(hit==4) cout<<"�A�����";  // �p�G��4�Ӹ��X�A�h�O�����
			else if(hit==5) cout<<"�A���Ѽ�";  // �p�G��5�Ӹ��X�A�h�O���Ѽ�
			else if(hit==6) cout<<"�A���Y��";  // �p�G��6�Ӹ��X�A�h�O���Y��
			else cout<<"�A�S����";  // �_�h�S����
		}  // �P�_����
		// �V�ϥΪ̽T�w�O�_�n���ƶ}��
		cout<<endl<<"�O�_�n�~��}��(1)�O(2)�_�G";  // ��ܥ\���T
		cin>>i;  // ������J
		if(i==2) loop=false;  // ���X�j��
	}  // �����j��
}  // �{������
