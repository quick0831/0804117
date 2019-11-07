#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

main(){
	srand((unsigned int)time(NULL));rand();
	for(int i=0;i<100;i++)
		cout<<setw(6)<<rand()%100+1;
	system("pause");
}
