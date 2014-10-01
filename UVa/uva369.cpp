#include<iostream>
#include<cstdio>

using namespace std;

#define MAXN 101

int N=0, M=0;

long binominal_coefficient(int n, int m)
{
	long bc[MAXN][MAXN];
	for (int i=0;i<=n;i++) bc[i][0]=1;
	for (int j=0;j<=n;j++) bc[j][j]=1;
	for (int i=1;i<=n;i++)
		for (int j=1;j<i;j++)
			bc[i][j]=bc[i-1][j-1]+bc[i-1][j];

	return bc[n][m];
}

int main(void)
{

	while (cin >> N >> M && M && N)
	{
		cout << N << " things taken " << M << " at a time is " << binominal_coefficient(N, M) << " exactly." << endl;
	}

	return 0;
}
