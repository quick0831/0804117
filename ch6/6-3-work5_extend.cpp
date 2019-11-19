#include <iostream>  // �פJ���Y�� iostream
#include <iomanip>  // �פJ���Y�� iomanip
#include <cmath>  // �פJ���Y�� cmath
using namespace std;  // �ŧi�R�W�Ŷ� std
// �ŵꪺ�Ŧ�
int i,j,total=0,sqrt_i;  // �w�q����ܼ�
const short store_prime_range=168;  // �]�w�w�s�Ŷ�����
short prime[store_prime_range],last=2;  // �]�w�w�s�Ŷ�
bool isPrime;  // �w�q���L�ܼ�
// �ŵꪺ�Ŧ�
int all_check(int input){  // �Ƶ{��(�հ��k)
	for(i=2;i<=input;i++){  // ��Ҧ��ư��ˬd
		sqrt_i=sqrt(i);  // �Ȧs����ڭ�
		if(sqrt_i*sqrt_i==i)  // �ˬd�����
			isPrime=false;  // �Y������ơA�h���O���
		else  // �_�h
			isPrime=true;  // �i��O���
		for(j=2;j<i && isPrime;j++)  // �ˬd�O�_�����
			if(i%j==0)  // �Y���]��
				isPrime=false;  // �h���O���
		if(isPrime==true){  // �Y�����
			cout<<" "<<i;  // ��X
			total++;  // �֥[���
		}  // �˴�����
	}  // �Ҧ��Ƭ��˴�����
	return total;  //�^�ǲ֥[
}  // �{�ǵ���
// �ŵꪺ�Ŧ�
int all_check2(int input){  // �Ƶ{��(�հ��k�A���L����)
	if(input>=2) cout<<" "<<2;  // �� 2 ���ҥ~�B�z
	for(i=3;i<=input;i+=2){  // ��Ҧ��ư��ˬd
		sqrt_i=sqrt(i);  // �Ȧs����ڭ�
		if(sqrt_i*sqrt_i==i)  // �ˬd�����
			isPrime=false;  // �Y������ơA�h���O���
		else  // �_�h
			isPrime=true;  // �i��O���
		for(j=2;j<i && isPrime;j++)  // �ˬd�O�_�����
			if(i%j==0)  // �Y���]��
				isPrime=false;  // �h���O���
		if(isPrime==true){  // �Y�����
			cout<<" "<<i;  // ��X
			total++;  // �֥[���
		}  // �˴�����
	}  // �Ҧ��Ƭ��˴�����
	if(input>=2) total++;  // �� 2 ���ҥ~�B�z
	return total;  //�^�ǲ֥[
}  // �{�ǵ���
// �ŵꪺ�Ŧ�
int erato(int input){  // �Ƶ{��(�J�Ԧ������S�k)
	for(i=2;i<=input;i++){  // ��Ҧ��ư��ˬd
		sqrt_i=sqrt(i);  // �Ȧs����ڭ�
		if(sqrt_i*sqrt_i==i)  // �ˬd�����
			isPrime=false;  // �Y������ơA�h���O���
		else  // �_�h
			isPrime=true;  // �i��O���
		for(j=2;j<=sqrt_i && isPrime;j++)  // �ˬd�O�_�����
			if(i%j==0)  // �Y���]��
				isPrime=false;  // �h���O���
		if(isPrime==true){  // �Y�����
			cout<<" "<<i;  // ��X
			total++;  // �֥[���
		}  // �˴�����
	}  // �Ҧ��Ƭ��˴�����
	return total;  //�^�ǲ֥[
}  // �{�ǵ���
// �ŵꪺ�Ŧ�
int erato2(int input){  // �Ƶ{��(�J�Ԧ������S�k�A���L����)
	if(input>=2) cout<<" "<<2;  // �� 2 ���ҥ~�B�z
	for(i=3;i<=input;i+=2){  // ��Ҧ��_�ư��ˬd
		sqrt_i=sqrt(i);  // �Ȧs����ڭ�
		if(sqrt_i*sqrt_i==i)  // �ˬd�����
			isPrime=false;  // �Y������ơA�h���O���
		else  // �_�h
			isPrime=true;  // �i��O���
		for(j=3;j<=sqrt_i && isPrime;j+=2)  // �ˬd�O�_�����
			if(i%j==0)  // �Y���]��
				isPrime=false;  // �h���O���
		if(isPrime==true){  // �Y�����
			cout<<" "<<i;  // ��X
			total++;  // �֥[���
		}  // �˴�����
	}  // �Ҧ��_�Ƭ��˴�����
	if(input>=2) total++;  // �� 2 ���ҥ~�B�z
	return total;  //�^�ǲ֥[
}  // �{�ǵ���
// �ŵꪺ�Ŧ�
int erato_temp(int input){  // �Ƶ{��(�J�Ԧ������S�k�A�ϥνw�s)
	for(i=2;i<=input;i++){  // ��Ҧ��ư��ˬd
		sqrt_i=sqrt(i);  // �Ȧs����ڭ�
		if(sqrt_i*sqrt_i==i)  // �ˬd�����
			isPrime=false;  // �Y������ơA�h���O���
		else  // �_�h
			isPrime=true;  // �i��O���
		for(j=0;j<store_prime_range && j<total;j++)  // �u���ˬd�w�s�����
			if(i%prime[j]==0)  // �Y���]��
				isPrime=false;  // �h���O���
		for(j=last+1;j<=sqrt_i && isPrime;j++)  // �ˬd��L�i��
			if(i%j==0)  // �Y���]��
				isPrime=false;  // �h���O���
		if(isPrime==true){  // �Y�����
			cout<<" "<<i;  // ��X
			if(total<store_prime_range){  // �Y�w�s����
				prime[total]=i;  // �C�J�w�s
				last=i;  // �O������
			}  // �g�J����
			total++;  // �֥[���
		}  // �˴�����
	}  // �Ҧ��Ƭ��˴�����
	return total;  //�^�ǲ֥[
}  // �{�ǵ���
// �ŵꪺ�Ŧ�
int erato2_temp(int input){  // �Ƶ{��(�J�Ԧ������S�k�A���L���ơA�ϥνw�s)
	if(input>=2) cout<<" "<<2;  // �� 2 ���ҥ~�B�z
	for(i=3;i<=input;i+=2){  // ��Ҧ��_�ư��ˬd
		sqrt_i=sqrt(i);  // �Ȧs����ڭ�
		if(sqrt_i*sqrt_i==i)  // �ˬd�����
			isPrime=false;  // �Y������ơA�h���O���
		else  // �_�h
			isPrime=true;  // �i��O���
		for(j=0;j<store_prime_range && j<total;j++)  // �u���ˬd�w�s�����
			if(i%prime[j]==0)  // �Y���]��
				isPrime=false;  // �h���O���
		for(j=last+2;j<=sqrt_i && isPrime;j+=2)  // �ˬd��L�i��
			if(i%j==0)  // �Y���]��
				isPrime=false;  // �h���O���
		if(isPrime==true){  // �Y�����
			cout<<" "<<i;  // ��X
			if(total<store_prime_range){  // �Y�w�s����
				prime[total]=i;  // �C�J�w�s
				last=i;  // �O������
			}  // �g�J����
			total++;  // �֥[���
		}  // �˴�����
	}  // �Ҧ��_�Ƭ��˴�����
	if(input>=2) total++;  // �� 2 ���ҥ~�B�z
	return total;  //�^�ǲ֥[
}  // �{�ǵ���
// �ŵꪺ�Ŧ�
main(){  // �D�{�� 
    int in,in2,total;  // �w�q��J�ܼ�
    cout<<"(1) �հ��k"<<endl;  // ��X�\���T
    cout<<"(2) �հ��k (���L����)"<<endl;  // ��X�\���T
    cout<<"(3) �J�Ԧ������S�k"<<endl;  // ��X�\���T
    cout<<"(4) �J�Ԧ������S�k (���L����)"<<endl;  // ��X�\���T
    cout<<"(5) �J�Ԧ������S�k (�ϥνw�s)"<<endl;  // ��X�\���T
    cout<<"(6) �J�Ԧ������S�k (���L���� & �ϥνw�s)"<<endl;  // ��X�\���T
    cout<<"�п�J�n���檺�t��k(�N��)�G";  // ��X�\���T
    cin>>in;  // ������J
    cout<<"�п�J�@�ӼƦr�G";  // ��X�\���T
    cin>>in2;  // ������J
    if(in==1) total=all_check(in2);  // �հ��k 
    if(in==2) total=all_check2(in2);  // �հ��k(���L����)
    if(in==3) total=erato(in2);  // �J�Ԧ������S�k
    if(in==4) total=erato2(in2);  // �J�Ԧ������S�k(���L����)
    if(in==5) total=erato_temp(in2);  // �J�Ԧ������S�k(�ϥνw�s)
    if(in==6) total=erato2_temp(in2);  // �J�Ԧ������S�k(���L����)(�ϥνw�s)
    cout<<endl<<"�@"<<total<<"�ӽ��"<<endl;  // ��X�֥[
    system("pause");  // �Ȱ��e���A��K�ϥΪ̾\Ū
}  // �{������ 
