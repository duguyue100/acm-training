#include<iostream>
#include<string>

using namespace std;

string st="";

bool check(char a, char b)
{
	if (((a>='A' && a<='Z')&&(b>='A' && b<='Z')) ||
		((a>='a' && a<='z')&&(b>='a' && b<='z')))
		return true;
	return false;
}

int cost(int l, string s)
{
	int sum=0;
	for (int i=l;i<=l+5;i++)
	{
		if (st[i]!=s[i-l])
			if (check(st[i],s[i-l])) sum+=5;
			else{
				if ((st[i]-s[i-l])==('A'-'a') || (st[i]-s[i-l])==('a'-'A')) sum+=5;
				else sum+=10;
			}
				
	}

	return sum;
}

int main(void)
{
	string s="Sandro";
	cin >> st;

	int min=cost(0,s);
	int length=st.length();
	for (int i=1;i<=length-6;i++)
	{
		int c=cost(i,s);
		if (c<min) min=c;
	}

	cout << min;

	return 0;
}