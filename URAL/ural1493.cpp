#include<iostream>
#include<string>

using namespace std;

int a[7]={0};

bool check()
{
	if (a[1]+a[2]+a[3]==a[4]+a[5]+a[6])
		return true;
	else return false;
}

void plus(int n)
{
	a[1]++;
	for (int i=2;i<=n;i++)
	{
		a[i]+=a[i-1]/10;
		a[i]%=10;
	}
}

void minus(int n)
{
	a[1]-=2;
	for (int i=2;i<=n;i++)
	{
		if (a[i-1]<0)
		{
			a[i]--;
			a[i-1]+=10;
		}
	}
}

int main(void)
{
	string st="";
	cin >> st;

	for (int i=st.length()-1;i>=0;i--)
		a[st.length()-i]=st[i]-'0';

	plus(st.length());
	bool flag1=check();
	minus(st.length());
	bool flag2=check();
	if (flag1 || flag2) cout << "Yes";
	else cout << "No";
	
	return 0;
}