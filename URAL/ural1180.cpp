#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string st="";
	cin >> st;

	int sum=0;
	for (int i=0;i<st.length();i++)
		sum+=st[i]-'0';

	sum=sum%3;
	if (sum==0) cout << 2;
	else cout << 1 << endl << sum;

	return 0;
}