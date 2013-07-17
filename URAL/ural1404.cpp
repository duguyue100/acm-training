#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string st="";
	cin >> st;

	string s="";
	for (int i=st.length()-1;i>=1;i--)
		s=(char)(((st[i]-'a')+26-(st[i-1]-'a'))%26+'a')+s;
	s=(char)((st[0]-'a'+21)%26+'a')+s;

	cout << s;

	return 0;
}