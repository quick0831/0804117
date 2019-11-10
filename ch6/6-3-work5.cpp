#include <iostream>  // 匯入標頭檔 iostream
#include <iomanip>  // 匯入標頭檔 iomanip
#include <cmath>  // 匯入標頭檔 cmath
using namespace std;  // 宣告命名空間 std
// 空虛的空行
main(){  // 主程序
	int input,i,j,total=0,sqrt_i;  // 定義整數變數
	const short store_prime_range=168;  // 設定緩存空間長度
	short prime[store_prime_range],last=2;  // 設定緩存空間
	bool isPrime;  // 定義布林變數
	cout<<"請輸入一個數字：";  // 輸出功能資訊
	cin>>input;  // 接收輸入
	ios_base::sync_with_stdio(false);  // 加快輸出
	cin.tie(0);  // 再加快輸出
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
	}  // 所有奇數皆檢測完畢
	if(input>=2) total++;  // 對 2 做例外處理
	cout<<endl<<"共"<<total<<"個質數"<<endl;  // 輸出累加
	system("pause");  // 暫停畫面，方便使用者閱讀
}  // 程序結束
