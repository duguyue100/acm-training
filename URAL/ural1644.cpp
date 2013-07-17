#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	int n=0;
	cin >> n;
	if (n==0)
	{
		cout << 10;
		return 0;
	}
	int h=2, s=10;
	for (int i=1;i<=n;i++)
	{
		int t=0;
		string st;
		cin >> t >> st;
		if (t<=2 && st=="satisfied")
		{
			cout << "Inconsistent";
			return 0;
		}
		else if (t==10 && st=="hungry")
		{
			cout << "Inconsistent";
			return 0;
		}
		else
		{
			if (st=="satisfied" && t<s)
				s=t;
			else if (st=="hungry" && t>h)
				h=t;
		}
	}

	if (s>h) cout << s;
	else cout << "Inconsistent";

	cin >> n;

	return 0;
}