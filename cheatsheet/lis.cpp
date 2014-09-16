#include<iostream>

using namespace std;

int n=0;
int a[100]={0}, f[100]={0}, x[100]={0};

int main(void)
{
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		cin >> n;
		x[i]=INT_MAX;
	}

	f[0]=0;

	int ans=0;
	for(int i=1;i<=n;i++)
	{
		int l=0, r=i;

		while (l+1<r)
		{
			int m=(l+r)/2;
			if (x[m]<a[i]) l=m; else r=m;
			// change to x[m]<=a[i] for non-decreasing case
		}

		f[i]=l+1;
		x[l+1]=a[i];
		if (f[i]>ans) ans=f[i];
	}

	cout << ans << endl;

	return 0;
}
