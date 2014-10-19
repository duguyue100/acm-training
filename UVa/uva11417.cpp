#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>

using namespace std;

int a[600][600];

int gcd(int l, int r)
{
	if (r==0) return l;
	else return gcd(r, l%r);
}

void init()
{
	for (int i=1;i<=500;i++)
		for (int j=i+1;j<=500;j++)
			a[i][j]=gcd(i,j);
}

int main(void)
{

	init();

	int n;
	while (cin >> n && n!=0)
	{
		int sum=0;
		for (int i=1;i<=n;i++)
			for (int j=i+1;j<=n;j++)
				sum+=a[i][j];

		cout << sum << endl;
	}

	return 0;
}
