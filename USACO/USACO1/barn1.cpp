/*
ID: duguyue1
TASK: barn1
LANG: C++
*/

#include<iostream>
#include<fstream>

using namespace std;

int m, s, c;
int a[201]={0};
int b[201]={0};

void sort(int l, int r)
{
	int i,j,x,y;
	i=l;
	j=r;
	x=b[(l+r)/2];
	do
	{
		while (b[i]<x) i++;
		while (x<b[j]) j--;
		if (i<=j)
		{
			y=b[i];
			b[i]=b[j];
			b[j]=y;
			i++;
			j--;
		}
	}while (i<=j);

	if (i<r) sort(i,r);
	if (l<j) sort(l,j);
}

int main(void)
{
	ifstream fin("barn1.in");
	ofstream fout("barn1.out");

	fin >> m >> s >> c;

	bool temp[201]={0};
	for (int i=1;i<=c;i++)
	{
		int t=0;
		fin >> t;
		temp[t]=true;
	}
	int k=1;
	for (int i=1;i<=s;i++)
		if (temp[i]==true)
		{
			a[k]=i;
			k++;
		}
	int i=2;
	k=1;
	while (i<=c)
	{
		if (a[i]-a[i-1]-1!=0)
		{
			b[k]=a[i]-a[i-1]-1;
			k++;
			i++;
		}
		else i++;
	}
	sort(1,k);

	int sum=a[c]-a[1]+1;
	if (m<c)
	{
		for (int i=k;i>k-m+1;i--)
			sum-=b[i];
		fout << sum << endl;
	}
	else fout << c << endl;

	return 0;
}
