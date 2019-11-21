#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

main(){
	char str[20]="Hello,World";
	char name[20],s1[20],s2[20];
	int i=0;
	
	cout<<"str="<<str<<endl;
	cout<<"len(str)="<<strlen(str)<<endl;
	
	for(i=0;i<strlen(str);i++)
		if(str[i]==',')
			break;
	
	strncpy(s1,str,i);
	cout<<"s1="<<s1<<endl;
	strncpy(s2,str+i+1,10);
	cout<<"s2="<<s2<<endl;
	cout<<"請輸入英文名：";
	cin.getline(name,10);
	cout<<"name="<<name<<endl;
	strcat(s1,",");
	strcat(s1,name);
	cout<<"s1="<<s1<<endl;
	cout<<"strcmp(str,s1)="<<strcmp(str,s1)<<endl;
	system("pause");
}
