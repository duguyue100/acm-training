#include<iostream>
#include<string>

using namespace std;

string a[13];
int b[101]={0};

bool check(string uname, string mod)
{
	if (mod=="gold")
	{
		for (int i=1;i<=4;i++)
			if (a[i]==uname)
				return true;
	}
	else if (mod=="silver")
	{
		for (int i=5;i<=8;i++)
			if (a[i]==uname)
				return true;
	}
	else if (mod=="bronze")
	{
		for (int i=9;i<=12;i++)
			if (a[i]==uname)
				return true;
	}

	return false;
}

int main(void)
{
	for (int i=1;i<=12;i++) cin >> a[i];
	int n=0;
	cin >> n;
	int k=1, max=-1;
	for (int i=1;i<=n;i++)
	{
		int t=0;
		cin >> t;
		for (int j=1;j<=t;j++)
		{
			string uname="";
			string mod="";
			cin >> uname;
			cin >> mod;
			cin >> mod;
			if (check(uname,mod))
				b[k]++;
		}
		if (b[k]>max) max=b[k];
		k++;
	}

	k=0;
	for (int i=1;i<=n;i++)
		if (b[i]==max) k++;
	
	cout << 5*k;

	return 0;
}