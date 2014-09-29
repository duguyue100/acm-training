/*
ID: duguyue1
TASK: subset
LANG: C++
*/

#include<iostream>
#include<cstdio>

using namespace std;

int n=0, s=0;

int f[1000]={0};

// overtime
int dfs(int m, int t)
{
	int sum=0;
	if (t==s)
	{
		return 1;
	}

	if (m<=n)
	{
		for (int i=m+1;i<=n;i++)
		{
			sum+=dfs(i, t+i);
		}
	}

	return sum;

}

int main(void)
{
	freopen("subset.in", "r", stdin);
	freopen("subset.out", "w", stdout);

	cin >> n;

	s=(1+n)*n/2;

	if (s%2==1 && n%4!=0 && (n+1)%4!=0)
	{
		cout << 0 << endl;
	}
	else
	{
		// variation of 0/1 Knapsack problem
		s/=2;
		f[1]=1;
		for (int i=2;i<=n;i++)
			for (int j=s;j>0;j--)
				if (j-i>0)
					f[j]+=f[j-i];

		cout << f[s] << endl;
	}

	return 0;
}
