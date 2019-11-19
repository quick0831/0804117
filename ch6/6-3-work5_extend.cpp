#include <iostream>  // 匯入標頭檔 iostream
#include <iomanip>  // 匯入標頭檔 iomanip
#include <cmath>  // 匯入標頭檔 cmath
using namespace std;  // 宣告命名空間 std
// 空虛的空行
int i,j,total=0,sqrt_i;  // 定義整數變數
const short store_prime_range=168;  // 設定緩存空間長度
short prime[store_prime_range],last=2;  // 設定緩存空間
bool isPrime;  // 定義布林變數
// 空虛的空行
int all_check(int input){  // 副程序(試除法)
	for(i=2;i<=input;i++){  // 對所有數做檢查
		sqrt_i=sqrt(i);  // 暫存平方根值
		if(sqrt_i*sqrt_i==i)  // 檢查平方數
			isPrime=false;  // 若為平方數，則不是質數
		else  // 否則
			isPrime=true;  // 可能是質數
		for(j=2;j<i && isPrime;j++)  // 檢查是否為質數
			if(i%j==0)  // 若找到因數
				isPrime=false;  // 則不是質數
		if(isPrime==true){  // 若為質數
			cout<<" "<<i;  // 輸出
			total++;  // 累加質數
		}  // 檢測完畢
	}  // 所有數皆檢測完畢
	return total;  //回傳累加
}  // 程序結束
// 空虛的空行
int all_check2(int input){  // 副程序(試除法，跳過偶數)
	if(input>=2) cout<<" "<<2;  // 對 2 做例外處理
	for(i=3;i<=input;i+=2){  // 對所有數做檢查
		sqrt_i=sqrt(i);  // 暫存平方根值
		if(sqrt_i*sqrt_i==i)  // 檢查平方數
			isPrime=false;  // 若為平方數，則不是質數
		else  // 否則
			isPrime=true;  // 可能是質數
		for(j=2;j<i && isPrime;j++)  // 檢查是否為質數
			if(i%j==0)  // 若找到因數
				isPrime=false;  // 則不是質數
		if(isPrime==true){  // 若為質數
			cout<<" "<<i;  // 輸出
			total++;  // 累加質數
		}  // 檢測完畢
	}  // 所有數皆檢測完畢
	if(input>=2) total++;  // 對 2 做例外處理
	return total;  //回傳累加
}  // 程序結束
// 空虛的空行
int erato(int input){  // 副程序(埃拉托斯尼特法)
	for(i=2;i<=input;i++){  // 對所有數做檢查
		sqrt_i=sqrt(i);  // 暫存平方根值
		if(sqrt_i*sqrt_i==i)  // 檢查平方數
			isPrime=false;  // 若為平方數，則不是質數
		else  // 否則
			isPrime=true;  // 可能是質數
		for(j=2;j<=sqrt_i && isPrime;j++)  // 檢查是否為質數
			if(i%j==0)  // 若找到因數
				isPrime=false;  // 則不是質數
		if(isPrime==true){  // 若為質數
			cout<<" "<<i;  // 輸出
			total++;  // 累加質數
		}  // 檢測完畢
	}  // 所有數皆檢測完畢
	return total;  //回傳累加
}  // 程序結束
// 空虛的空行
int erato2(int input){  // 副程序(埃拉托斯尼特法，跳過偶數)
	if(input>=2) cout<<" "<<2;  // 對 2 做例外處理
	for(i=3;i<=input;i+=2){  // 對所有奇數做檢查
		sqrt_i=sqrt(i);  // 暫存平方根值
		if(sqrt_i*sqrt_i==i)  // 檢查平方數
			isPrime=false;  // 若為平方數，則不是質數
		else  // 否則
			isPrime=true;  // 可能是質數
		for(j=3;j<=sqrt_i && isPrime;j+=2)  // 檢查是否為質數
			if(i%j==0)  // 若找到因數
				isPrime=false;  // 則不是質數
		if(isPrime==true){  // 若為質數
			cout<<" "<<i;  // 輸出
			total++;  // 累加質數
		}  // 檢測完畢
	}  // 所有奇數皆檢測完畢
	if(input>=2) total++;  // 對 2 做例外處理
	return total;  //回傳累加
}  // 程序結束
// 空虛的空行
int erato_temp(int input){  // 副程序(埃拉托斯尼特法，使用緩存)
	for(i=2;i<=input;i++){  // 對所有數做檢查
		sqrt_i=sqrt(i);  // 暫存平方根值
		if(sqrt_i*sqrt_i==i)  // 檢查平方數
			isPrime=false;  // 若為平方數，則不是質數
		else  // 否則
			isPrime=true;  // 可能是質數
		for(j=0;j<store_prime_range && j<total;j++)  // 優先檢查緩存內質數
			if(i%prime[j]==0)  // 若找到因數
				isPrime=false;  // 則不是質數
		for(j=last+1;j<=sqrt_i && isPrime;j++)  // 檢查其他可能
			if(i%j==0)  // 若找到因數
				isPrime=false;  // 則不是質數
		if(isPrime==true){  // 若為質數
			cout<<" "<<i;  // 輸出
			if(total<store_prime_range){  // 若緩存未滿
				prime[total]=i;  // 列入緩存
				last=i;  // 記為末項
			}  // 寫入完成
			total++;  // 累加質數
		}  // 檢測完畢
	}  // 所有數皆檢測完畢
	return total;  //回傳累加
}  // 程序結束
// 空虛的空行
int erato2_temp(int input){  // 副程序(埃拉托斯尼特法，跳過偶數，使用緩存)
	if(input>=2) cout<<" "<<2;  // 對 2 做例外處理
	for(i=3;i<=input;i+=2){  // 對所有奇數做檢查
		sqrt_i=sqrt(i);  // 暫存平方根值
		if(sqrt_i*sqrt_i==i)  // 檢查平方數
			isPrime=false;  // 若為平方數，則不是質數
		else  // 否則
			isPrime=true;  // 可能是質數
		for(j=0;j<store_prime_range && j<total;j++)  // 優先檢查緩存內質數
			if(i%prime[j]==0)  // 若找到因數
				isPrime=false;  // 則不是質數
		for(j=last+2;j<=sqrt_i && isPrime;j+=2)  // 檢查其他可能
			if(i%j==0)  // 若找到因數
				isPrime=false;  // 則不是質數
		if(isPrime==true){  // 若為質數
			cout<<" "<<i;  // 輸出
			if(total<store_prime_range){  // 若緩存未滿
				prime[total]=i;  // 列入緩存
				last=i;  // 記為末項
			}  // 寫入完成
			total++;  // 累加質數
		}  // 檢測完畢
	}  // 所有奇數皆檢測完畢
	if(input>=2) total++;  // 對 2 做例外處理
	return total;  //回傳累加
}  // 程序結束
// 空虛的空行
main(){  // 主程序 
    int in,in2,total;  // 定義輸入變數
    cout<<"(1) 試除法"<<endl;  // 輸出功能資訊
    cout<<"(2) 試除法 (跳過偶數)"<<endl;  // 輸出功能資訊
    cout<<"(3) 埃拉托斯尼特法"<<endl;  // 輸出功能資訊
    cout<<"(4) 埃拉托斯尼特法 (跳過偶數)"<<endl;  // 輸出功能資訊
    cout<<"(5) 埃拉托斯尼特法 (使用緩存)"<<endl;  // 輸出功能資訊
    cout<<"(6) 埃拉托斯尼特法 (跳過偶數 & 使用緩存)"<<endl;  // 輸出功能資訊
    cout<<"請輸入要執行的演算法(代號)：";  // 輸出功能資訊
    cin>>in;  // 接收輸入
    cout<<"請輸入一個數字：";  // 輸出功能資訊
    cin>>in2;  // 接收輸入
    if(in==1) total=all_check(in2);  // 試除法 
    if(in==2) total=all_check2(in2);  // 試除法(跳過偶數)
    if(in==3) total=erato(in2);  // 埃拉托斯尼特法
    if(in==4) total=erato2(in2);  // 埃拉托斯尼特法(跳過偶數)
    if(in==5) total=erato_temp(in2);  // 埃拉托斯尼特法(使用緩存)
    if(in==6) total=erato2_temp(in2);  // 埃拉托斯尼特法(跳過偶數)(使用緩存)
    cout<<endl<<"共"<<total<<"個質數"<<endl;  // 輸出累加
    system("pause");  // 暫停畫面，方便使用者閱讀
}  // 程式結束 
