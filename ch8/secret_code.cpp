#include <iostream>  // 匯入標頭檔 iostream
#include <iomanip>  // 匯入標頭檔 iomanip
#include <cstdlib>  // 匯入標頭檔 cstdlib
#include <ctime>  // 匯入標頭檔 ctime
using namespace std;  // 宣告命名空間 std
// 一點空間
main(){  // 主函數
	int code,input,high=100,low=1;  // 定義整數變數
	srand((unsigned int)time(NULL)); rand();  // 初始化亂數
	for(int i=0;i<rand()/10;i++) rand();  // 繼續洗亂數
	code=rand()%(high-low-1)+low+1;  // 亂數決定終極密碼
	cout<<"+--------------+"<<endl;  // 顯
	cout<<"|              |"<<endl;  // 示
	cout<<"|  終          |"<<endl;  // 終
	cout<<"|        密    |"<<endl;  // 極
	cout<<"|    極        |"<<endl;  // 密
	cout<<"|          碼  |"<<endl;  // 碼
	cout<<"|              |"<<endl;  // 的
	cout<<"+--------------+"<<endl;  // 圖
	cout<<endl;                      // 案
	cout<<"是否要顯示終極密碼？"<<endl;  // 顯示功能資訊
	cout<<"(1)是 (2)否      -> ";  // 顯示選項
	cin>>input;  // 接收輸入
	cout<<endl;  // 換行
	if(input==1) cout<<"終極密碼為："<<code<<endl;  // 輸出終極密碼
	while(true){  // 迴圈
		cout<<"請做出您的猜測：";  // 提示文字
		cin>>input;  // 接收輸入
		if(input<
			cout<<"終極密碼在 "<<low<<" ~ "<<high<<" 之間"<<endl;  // 顯示線索
			if(high-low==2) break;  // 判斷是否只剩一種可能答案
		}else{  // 否則
			cout<<"輸入錯誤，請重試"<<endl;  // 錯誤訊息
		}  // 結束判斷
	}  // 結束迴圈
	cout<<endl<<"遊戲結束，終極密碼為："<<code<<endl<<endl;  // 顯示終極密碼
	system("pause");  // 暫停視窗，方便使用者閱讀
}  // 程式結束
