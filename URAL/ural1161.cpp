#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

double a[101]={0};
int n=0;

void sort(int l, int r)
{
	int i,j;
	double x,y;
	i=l;
	j=r;
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

int main(void)
{
	cin >> n;
	
	for (int i=1;i<=n;i++) cin >> a[i];

	sort(1,n);

	double t=a[1];
	for (int i=2;i<=n;i++)
		t=2*sqrt(a[i]*t);;

	printf("%.2f",t);

	return 0;
}