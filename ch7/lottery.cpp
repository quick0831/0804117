#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

main(){
	int i,j,n[6],m[7],hit,temp;
	// n�O��`���X m�O�}�����X *(m+6)�O�S�O�� hit�O�����y�� 
	bool pass,loop;
	srand((unsigned int)time(NULL)); rand();
	cout<<"�j�ֳz�����C��"<<endl;
	cout<<"�Ш̧ǿ�J���Ӹ��X�A�����O1~49���Ʀr�A�B���i�H���ơC"<<endl;
	for(i=0;i<6;i++){
		cout<<"��"<<i+1<<"�ӼƦr�G";
		cin>>*(n+i);
		pass=true;
		for(j=0;j<i;j++)
			if(*(n+i)==*(n+j)){
				cout<<"�w�g��J�L�o�ӼƦr�A�Э��s��J�I"<<endl;
				pass=false;
				break;
			}
		if(*(n+i)<1 || *(n+i)>49){
			cout<<"��J���Ʀr�W�X1~49���d��A�Э��s��J�I"<<endl;
			pass=false;
		}
		if(!pass) i--;
	}
	loop=true;
	while(loop){
		//randomize
		for(i=0;i<=6;i++){
			*(m+i)=rand()%49+1;
			pass=true;
			for(j=0;j<i;j++)
				if(*(m+i)==*(m+j)){
					i--;
					break;
				}
		}
		
		//sort
		for(i=0;i<5;i++)
			for(j=0;j<5-i;j++)
				if(*(m+j) > *(m+j+1)){
					temp = *(m+j);
					*(m+j) = *(m+j+1);
					*(m+j+1) = temp;
				}
		
		//output
		cout<<endl<<"�����A�諸�Ʀr���G";
		for(i=0;i<6;i++) cout<<setw(3)<<*(n+i);
		cout<<endl<<"�����}�X�ֳz���X�G";
		for(i=0;i<6;i++) cout<<setw(3)<<*(m+i);
		cout<<"  �S�O���G "<<*(m+6)<<endl;
		
		//check prize
		pass=false;
		for(i=0;i<=6;i++)
			if(*(n+i)==*(m+6)){
				pass=true;
				break;
			}
		hit=0;
		for(i=0;i<=6;i++)
			for(j=0;j<6;j++)
				if(*(n+i)==*(m+j)){
					hit++;
					break;
				}
		if(pass){
			if(hit==2) cout<<"�A���m��";
			else if(hit==3) cout<<"�A������";
			else if(hit==4) cout<<"�A���v��";
			else if(hit==5) cout<<"�A���L��";
			else cout<<"�A�S����";
		}else{
			if(hit==3) cout<<"�A������";
			else if(hit==4) cout<<"�A�����";
			else if(hit==5) cout<<"�A���Ѽ�";
			else if(hit==6) cout<<"�A���Y��";
			else cout<<"�A�S����";
		}
		
		//loop
		cout<<endl<<"�O�_�n�~��}��(1)�O(2)�_�G";
		cin>>i;
		if(i==2) loop=false;
	}
}
