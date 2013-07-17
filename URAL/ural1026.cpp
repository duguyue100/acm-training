#include<iostream>

using namespace std;

int a[100001]={0};
int n;

void sort(int l, int r)
{
	int i,j,x,y;
	i=l;j=r;x=a[(l+r)/2];
	do
	{
		while (a[i]<x) i++;
		while (x<a[j]) j--;
		if (i<=j)
		{
			y=a[i];a[i]=a[j];a[j]=y;
			i++;j--;
		}
	}while (i<=j);
	if (i<r) sort(i,r);
	if (l<j) sort(l,j);
}

int main(void)
{
	cin >> n;
	for (int i=1;i<=n;i++) cin >> a[i];
	sort(1,n);
	char ch;
	cin >> ch >> ch >> ch;
	int k;
	cin >> k;
	for (int i=1;i<=k;i++)
	{
		int t;cin >> t;
		cout << a[t] << endl;
	}

	return 0;
}