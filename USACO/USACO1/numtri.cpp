/*
ID: duguyue1
TASK: numtri
LANG: C++
*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int a[1001][1001];
int f[1001][1001];
int n=0;

int findpath()
{
	for (int i=1;i<=n;i++)
	{
		f[n][i]=a[n][i];
	}

	for (int i=n-1;i>=1;i--)
		for (int j=1;j<=i;j++)
		{
			if (f[i+1][j]>f[i+1][j+1])
				f[i][j]=f[i+1][j]+a[i][j];
			else f[i][j]=f[i+1][j+1]+a[i][j];
		}

	return f[1][1];
}

int main(void)
{
	freopen("numtri.in", "r", stdin);
	freopen("numtri.out", "w", stdout);

	cin >> n;

	for (int i=1;i<=n; i++)
		for (int j=1; j<=i; j++)
		{
			cin >> a[i][j];
		}

	cout << findpath() << endl;;

	return 0;
}


