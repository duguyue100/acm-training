/*
ID: duguyue1
TASK: milk
LANG: C++
*/

#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int n,m;
int a[5001]={0};
int b[5001]={0};

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
			y=b[i];
			b[i]=b[j];
			b[j]=y;
			i++;
			j--;
		}
	}while(i<=j);

	if (i<r) sort(i,r);
	if (l<j) sort(l,j);
}

int main(void)
{
	ifstream fin("milk.in");
	ofstream fout("milk.out");

	fin >> n >> m;

	for (int i=1;i<=m;i++) fin >> a[i] >> b[i];

	sort(1,m);

	int sum=0;
	int i=1;
	while (n!=0)
	{
		if (n>b[i])
		{
			sum+=a[i]*b[i];
			n-=b[i];
			i++;
		}
		else
		{
			sum+=n*a[i];
			n=0;
			i++;
		}
	}

	fout << sum << endl;

	return 0;
}
