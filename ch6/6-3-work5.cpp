#include <iostream>  // �פJ���Y�� iostream
#include <iomanip>  // �פJ���Y�� iomanip
#include <cmath>  // �פJ���Y�� cmath
using namespace std;  // �ŧi�R�W�Ŷ� std
// �ŵꪺ�Ŧ�
main(){  // �D�{��
	int input,i,j,total=0,sqrt_i;  // �w�q����ܼ�
	const short store_prime_range=168;  // �]�w�w�s�Ŷ�����
	short prime[store_prime_range],last=2;  // �]�w�w�s�Ŷ�
	bool isPrime;  // �w�q���L�ܼ�
	cout<<"�п�J�@�ӼƦr�G";  // ��X�\���T
	cin>>input;  // ������J
	ios_base::sync_with_stdio(false);  // �[�ֿ�X
	cin.tie(0);  // �A�[�ֿ�X
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
	}  // �Ҧ��_�Ƭ��˴�����
	if(input>=2) total++;  // �� 2 ���ҥ~�B�z
	cout<<endl<<"�@"<<total<<"�ӽ��"<<endl;  // ��X�֥[
	system("pause");  // �Ȱ��e���A��K�ϥΪ̾\Ū
}  // �{�ǵ���
