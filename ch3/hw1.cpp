#include <iostream>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Start up Screen
	
	cout<<endl;
	cout<<"                          _____                          "<<endl;
	cout<<"                   _.+sd$$$$$$$$$bs+._                   "<<endl;
	cout<<"               .+d$$$$$$$$$$$$$$$$$$$$$b+.               "<<endl;
	cout<<"            .sd$$$$$$$P^*^T$$$P^*\"*^T$$$$$bs.            "<<endl;
	cout<<"          .s$$$$$$$$P*     `*' _._  `T$$$$$$$s.          "<<endl;
	cout<<"        .s$$$$$$$$$P          ` :$;   T$$$$$$$$s.        "<<endl;
	cout<<"       s$$$$$$$$$$;  db..+s.   `**'    T$$$$$$$$$s       "<<endl;
	cout<<"     .$$$$$$$$$$$$'  `T$P*'             T$$$$$$$$$$.     "<<endl;
	cout<<"    .$$$$$$$$$$$$P                       T$$$$$$$$$$.    "<<endl;
	cout<<"   .$$$$$$$$$$$$$b                       `$$$$$$$$$$$.   "<<endl;
	cout<<"  :$$$$$$$$$$$$$$$.                       T$$$$$$$$$$$;  "<<endl;
	cout<<"  $$$$$$$$$P^*' :$$b.                     d$$$$$$$$$$$$  "<<endl;
	cout<<" :$$$$$$$P'      T$$$$bs._               :P'`*^T$$$$$$$; "<<endl;
	cout<<" $$$$$$$P         `*T$$$$$b              '      `T$$$$$$ "<<endl;
	cout<<":$$$$$$$b            `*T$$$s                      :$$$$$;"<<endl;
	cout<<":$$$$$$$$b.                                        $$$$$;"<<endl;
	cout<<"$$$$$$$$$$$b.                                     :$$$$$$"<<endl;
	cout<<"$$$$$$$$$$$$$bs.                                 .$$$$$$$"<<endl;
	cout<<"$$$$$$$$$$$$$$$$$bs.                           .d$$$$$$$$"<<endl;
	cout<<":$$$$$$$$$$$$$P*\"*T$$bs,._                  .sd$$$$$$$$$;"<<endl;
	cout<<":$$$$$$$$$$$$P     TP^**T$bss++.._____..++sd$$$$$$$$$$$$;"<<endl;
	cout<<" $$$$$$$$$$$$b           `T$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ "<<endl;
	cout<<" :$$$$$$$$$$$$b.           `*T$$P^*\"*\"*^^*T$$$$$$$$$$$$; "<<endl;
	cout<<"  $$$b       `T$b+                        :$$$$$$$BUG$$  "<<endl;
	cout<<"  :$P'         `\"'               ,._.     ;$$$$$$$$$$$;  "<<endl;
	cout<<"   \                            `*TP*     d$$P*******$   "<<endl;
	cout<<"    \                                    :$$P'      /    "<<endl;
	cout<<"     \                                  :dP'       /     "<<endl;
	cout<<"      `.                               d$P       .'      "<<endl;
	cout<<"[bug]   `.                             `'      .'        "<<endl;
	cout<<"          `-.                               .-'          "<<endl;
	cout<<"             `-.                         .-'             "<<endl;
	cout<<"                `*+-._             _.-+*'                "<<endl;
	cout<<"                      `\"*-------*\"'"<<endl;
	cout<<endl;
	cout<<setw(5)<<"*"<<endl;
	cout<<setw(6)<<"***"<<endl;
	cout<<setw(7)<<"*****"<<endl;
	cout<<setw(8)<<"*Linux*"<<endl;
	cout<<"*********"<<endl;
	cout<<endl;
	
	float a,b;
	cout<<"Please enter 2 numbers : ";
	cin>>a>>b;
	cout<<fixed<<setprecision(2);
	cout<<setw(8)<<a<<" +"<<setw(8)<<b<<" ="<<setw(12)<<a+b<<endl;
	cout<<setw(8)<<a<<" -"<<setw(8)<<b<<" ="<<setw(12)<<a-b<<endl;
	cout<<setw(8)<<a<<" *"<<setw(8)<<b<<" ="<<setw(12)<<a*b<<endl;
	cout<<setw(8)<<a<<" /"<<setw(8)<<b<<" =";
	cout<<fixed<<setprecision(3);
	cout<<setw(13)<<a/b<<endl;
	system("pause");
	return 0;
}
