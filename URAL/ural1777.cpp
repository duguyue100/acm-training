#include<iostream>

using namespace std;

unsigned long long a[5]={0};

void sort(int l, int r)
{
	int i,j;
	unsigned long long x,y;
	i=l; j=r;
	x=a[(l+r)/2];
	do
	{
		while (a[i]>x) i++;
		while (x>a[j]) j--;
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

unsigned long long findmin()
{
	unsigned long long m=a[1]-a[2];
	if ((a[2]-a[3])<m) m=a[2]-a[3];
	if ((a[3]-a[4])<m) m=a[3]-a[4];
	return m;
}

int main(void)
{
	
	cin >> a[1] >> a[2] >> a[3];
	sort(1,4);
	unsigned long long min=a[1]-a[2];
	if ((a[2]-a[3])<min) a[4]=a[2]-a[3];
	else a[4]=min;
	int k=1;

	while (a[4]!=0)
	{
		sort(1,4);
		unsigned long long t=findmin();
		a[1]=a[2];
		a[2]=a[3];
		a[3]=a[4];
		a[4]=t;
		k++;
	}

	cout << k;

	return 0;
}