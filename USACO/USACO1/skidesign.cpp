/*
ID: duguyue1
TASK: skidesign
LANG: C++
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<climits>

using namespace std;

int n=0;
int a[2100]={0};

int main(void)
{
	freopen("skidesign.in", "r", stdin);
	freopen("skidesign.out", "w", stdout);

	cin >> n;

	for (int i=0;i<n;i++) cin >> a[i];

	sort(a,a+n);

	int sum=INT_MAX;
	for (int i=a[0];i<=a[n-1];i++)
	{
		int s=0;
		for (int j=0;j<n;j++)
		{
			if (a[j]<i) s+=(i-a[j])*(i-a[j]);
			else if ((a[j]-17)>i) s+=(a[j]-17-i)*(a[j]-17-i);
		}
		if (s<sum) sum=s;
	}

	cout << sum << endl;

	return 0;
}


