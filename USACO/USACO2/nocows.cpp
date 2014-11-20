/*
ID: duguyue1
TASK: nocows
LANG: C++
*/

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int f[150][250];
int N, K;
int st[150][250];

int main(void)
{
	freopen("nocows.in", "r", stdin);
	freopen("nocows.out", "w", stdout);

	cin >> N >> K;

	f[1][1]=1;
	int factor=0;
	for (int i=2;i<=K;i++)// at least have depth 2
	{
		for (int j=1;j<=N;j+=2) // number of nodes
			for (int k=1; k<=j-1-k; k+=2) // only odd case is considered
			{
				if (k!=j-1-k) factor=2; else factor=1;
				f[i][j]+=factor*(st[i-2][k]*f[i-1][j-1-k]+
								 f[i-1][k]*st[i-2][j-1-k]+
								 f[i-1][k]*f[i-1][j-1-k]);
				f[i][j]%=9901;
			}

		for (int k=0;k<=N;k++)
		{
			st[i-1][k]+=f[i-1][k]+st[i-2][k];
			st[i-1][k]%=9901;
		}
	}

	cout << f[K][N] << endl;

	return 0;
}



