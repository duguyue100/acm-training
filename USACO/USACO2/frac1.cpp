/*
ID: duguyue1
TASK: frac1
LANG: C++
*/

#include<iostream>
#include<cstdio>

using namespace std;

bool a[161][161]={0};
int N=0;
int b[25601][2]={0};
double c[25601]={0};

void sort(int l, int r)
{
	int i,j;
	double x,y;
	i=l;j=r;x=c[(l+r)/2];
	do
	{
		while (c[i]<x) i++;
		while (x<c[j]) j--;
		if (i<=j)
		{
			int y1;
			y1=b[i][0];b[i][0]=b[j][0];b[j][0]=y1;
			y1=b[i][1];b[i][1]=b[j][1];b[j][1]=y1;
			y=c[i];c[i]=c[j];c[j]=y;
			i++;j--;
		}
	}while (i<=j);
	if (i<r) sort(i,r);
	if (l<j) sort(l,j);
}

int gcd(int a, int b)
{
	if (a==0) return b;

	return gcd(b%a, a);
}

bool check(int i, int j)
{
	int m=gcd(i,j);
	if (m!=1 && a[i/m][j/m]==false)
		return true;

	return false;
}

int main(void)
{
	freopen("frac1.in","r",stdin);
	freopen("frac1.out","w",stdout);

	cin >> N;

	for (int i=1;i<=N;i++)
		for (int j=1;j<i;j++)
		{
			if (check(j,i))
				a[j][i]=true;
		}

	cout << "0/1" << endl;

	int counter=1;
	for (int i=1;i<=N;i++)
		for (int j=1;j<i;j++)
			if (a[j][i]==false)
			{
				b[counter][0]=j;
				b[counter][1]=i;
				c[counter]=(double)j/(double)i;

				counter++;
			}

	sort(1, counter-1);

	for (int i=1;i<counter;i++)
		cout << (int)b[i][0] << "/" << (int)b[i][1] << endl;

	cout << "1/1" << endl;

	return 0;
}
