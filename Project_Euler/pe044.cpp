#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int n=3000;
long a[100000]={0};

bool check(int i, int j)
{
	if (std::binary_search(a+1, a+n+1, a[i]+a[j]) &&
		std::binary_search(a+1, a+n+1, abs(a[i]-a[j])))
		return true;
	else return false;
}

int main(void)
{
	for (int i=1;i<=n;i++)
		a[i]=(i*(3*i-1))/2;

	long min=10000000;
	for (int i=1;i<=n;i++)
		for (int j=i+1;j<=n;j++)
		{
			if (check(i,j))
			{
				if (min>abs(a[j]-a[i]))
				{
					min=abs(a[j]-a[i]);
					cout << a[j] << " " << a[i] << " " << abs(a[j]-a[i]) << endl;
				}
			}
		}

	cout << min << endl;

	return 0;
}
