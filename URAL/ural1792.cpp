#include<iostream>

using namespace std;

int a[8]={0};

bool check()
{
	if (a[5]==(a[2]+a[3]+a[4])%2 &&
		a[6]==(a[1]+a[3]+a[4])%2 &&
		a[7]==(a[1]+a[2]+a[4])%2)
		return true;
	return false;
}

int main(void)
{
	for (int i=1;i<=7;i++) cin >> a[i];

	if (check())
	{
		for (int i=1;i<=6;i++) cout << a[i] << " ";
			cout << a[7];
		return 0;
	}

	for (int i=1;i<=4;i++)
	{
		if (a[i]==1) a[i]=0;
		else a[i]=1;
		if (check())
		{
			for (int i=1;i<=6;i++) cout << a[i] << " ";
				cout << a[7];
			return 0;
		}
		if (a[i]==1) a[i]=0;
		else a[i]=1;
	}
	
	a[5]=(a[2]+a[3]+a[4])%2;
	a[6]=(a[1]+a[3]+a[4])%2;
	a[7]=(a[1]+a[2]+a[4])%2;

	for (int i=1;i<=6;i++) cout << a[i] << " ";
	cout << a[7];

	return 0;
}