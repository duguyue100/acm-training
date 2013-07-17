#include<iostream>
#include<cstdio>

using namespace std;

int count(int n)
{
	int k=1;
	while (n!=1)
	{
		if (n%2==1) n=3*n+1;
		else n=n/2;
		k++;
	}

	return k;
}

int main(void)
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		int n1=n, m1=m;
		if (n>m)
		{
			int t=n;
			n=m;
			m=t;
		}

		int max=-1;
		for (int i=n;i<=m;i++)
		{
			int t=count(i);
			if (t>max) max=t;
		}

		cout << n1 << " " << m1 << " " << max << endl;
	}

	return 0;
}