#include<iostream>

using namespace std;

int a[25001]={0};

void sort(int l, int r)
{
	int i,j,x,y;
	i=l;
	j=r;
	x=a[(l+r)/2];
	do
	{
		while (a[i]<x) i++;
		while (x<a[j]) j--;
		if (i<=j)
		{
			y=a[i];
			a[i]=a[j];
			a[j]=y;
			i++;
			j--;
		}
	}while (i<=j);
	if (i<r) sort(i,r);
	if (l<j) sort(l,j);
}

int main(void)
{
	int n=0;
	cin >> n;

	for (int i=1;i<=n;i++)
		cin >> a[i];

	sort(1,n);

	for (int i=n;i>=1;i--)
		cout << a[i] << endl;

	return 0;
}