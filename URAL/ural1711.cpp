#include<iostream>
#include<string>

using namespace std;

string st[20][3];
int b[100]={0};
int n;
struct Name
{
	string name;
	int index;
	Name()
	{
		name="";
		index=0;
	}
}a[100];

void sort(int l, int r)
{
	int i,j;
	string x;
	Name y;
	i=l;j=r;
	x=a[(l+r)/2].name;
	do
	{
		while (a[i].name<x) i++;
		while (x<a[j].name) j--;
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

	for (int i=1;i<=n;i++)
		for (int j=0;j<3;j++)
			cin >> st[i][j];

	int k=1;
	for (int i=1;i<=n;i++)
	{
		cin >> b[i];
		for (int j=0;j<3;j++)
		{
			a[k].name=st[i][j];
			a[k].index=i;
			k++;
		}
	}

	sort(1,k-1);

	string r[100];
	int t=1;
	for (int i=1;i<k;i++)
	{
		if (t<=n)
			if (a[i].index==b[t])
			{
				r[t]=a[i].name;
				t++;
			}
	}

	if (t==n+1)
		for (int i=1;i<=n;i++)
			cout << r[i] << endl;
	else cout << "IMPOSSIBLE";

	return 0;
}