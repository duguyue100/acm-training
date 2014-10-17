/*
ID: duguyue1
TASK: wormhole
LANG: C++
*/

#include<iostream>
#include<cstdio>

using namespace std;

int N=0;
int a[13][2];
int b[13];
int c[13];

bool check()
{
	for (int i=1;i<=N;i++)
	{
		int temp=i;

		for (int j=0;j<N;j++)
			temp=c[b[temp]];

		if (temp!=0) return true;
	}

	return false;
}

// generate all solutions.
int dfs()
{
	int i=0, sum=0;
	for (i=1;i<=N;i++)
		if (b[i]==0)
			break;

	if (i>N)
		if (check())
			return 1;
		else return 0;

	for (int j=i+1; j<=N; j++)
		if (b[j]==0)
		{
			b[i]=j;
			b[j]=i;
			sum+=dfs();
			b[i]=0;
			b[j]=0;
		}

	return sum;
}

int main(void)
{
	freopen("wormhole.in", "r", stdin);
	freopen("wormhole.out", "w", stdout);

	cin >> N;

	for (int i=1;i<=N;i++)
		cin >> a[i][0] >> a[i][1];

	for (int i=1;i<=N;i++)
		for (int j=1;j<=N;j++)
			if (a[j][0]>a[i][0] && a[i][1]==a[j][1])
				if (c[i]==0 || a[j][0]-a[i][0]<a[c[i]][0]-a[i][0])
					c[i]=j;

	cout << dfs() << endl;

	return 0;
}


