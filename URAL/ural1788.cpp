#include<iostream>
#include<algorithm>

using namespace std;

int a[100]={0};
int b[100]={0};
int n=0,m=0;

void sorta(int l,int r)
{
	int i,j,x,y;
	i=l;j=r;x=a[(l+r)/2];
	do{
		while (a[i]>x) i++;
		while (x>a[j]) j--;
		if (i<=j)
		{
			y=a[i];a[i]=a[j];a[j]=y;
			i++;j--;
		}
	}while(i<=j);
	if (i<r) sorta(i,r);
	if (l<j) sorta(l,j);
}

void sortb(int l, int r)
{
	int i,j,x,y;
	i=l;j=r;x=b[(l+r)/2];
	do{
		while (b[i]>x) i++;
		while (x>b[j]) j--;
		if (i<=j)
		{
			y=b[i];b[i]=b[j];b[j]=y;
			i++;j--;
		}
	}while(i<=j);
	if (i<r) sortb(i,r);
	if (l<j) sortb(l,j);
}

long calcost(int t)
{
	long upset=0;
	for (int i=t+1;i<=n;i++) upset+=a[i];
	for (int i=t+1;i<=m;i++) upset+=b[i]*t;

	return upset;
}

int main(void)
{
	cin >> n >> m;
	for (int i=1;i<=n;i++) cin >> a[i];
	sorta(1,n);
	for (int i=1;i<=m;i++) cin >> b[i];
	sortb(1,m);

	int l=n;
	if (l>m) l=m;

	long mincost=calcost(0);
	for (int i=1;i<=l;i++)
	{
		long cost=calcost(i);
		if (cost<mincost) mincost=cost;
	}

	cout << mincost;

	return 0;
}