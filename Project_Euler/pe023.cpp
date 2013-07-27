#include<iostream>
#include<cmath>

using namespace std;

bool check(int n)
{
	int sum=0;
	for (int i=1;i<=n/2;i++)
	{
		if (n%i==0) sum+=i;
	}

	if (sum>n) return true;
	else return false;
}

int main(void)
{
	bool f[28124]={0};
	int a[7000]={0};
	int count=1;

	for (int i=1;i<=28123;i++)
	{
		if (check(i))
		{
			a[count]=i;
			cout << i << endl;
			count++;
		}
	}

	for (int i=1;i<count;i++)
		for (int j=1;j<count;j++)
		{
			int t=a[i]+a[j];
			if (t<28124 && f[t]==false)
				f[t]=true;
		}

	long long sum=0;
	for (int i=1;i<28124;i++)
	{
		if (f[i]==false)
			sum+=i;
	}

	cout << "output: " << sum;

	return 0;
}