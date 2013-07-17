#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string st1="";
	cin >> st1;
	string st2="";
	cin >> st2;

	if ((st1[3]=='0'||st1[3]=='2'||st1[3]=='4'||st1[3]=='6'||st1[3]=='8')||
		(st2[3]=='1'||st2[3]=='3'||st2[3]=='5'||st2[3]=='7'||st2[3]=='9'))
		cout << "yes";
	else cout << "no";

	return 0;
}