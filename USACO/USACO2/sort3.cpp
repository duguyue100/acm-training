/*
ID: duguyue1
TASK: sort3
LANG: C++
*/

#include<iostream>
#include<cstdio>

using namespace std;

int a[1001]={0};
int N=0;

void exchange(int i, int j)
{
	int y;
	y=a[i];
	a[i]=a[j];
	a[j]=y;
}

int find(int number, int s, int e)
{
	for (int i=s;i<=e;i++)
	{
		if (a[i]==number)
			return i;
	}

	return 0;
}

int main(void)
{
	freopen("sort3.in", "r", stdin);
	freopen("sort3.out", "w", stdout);

	cin >> N;

	int n1=0, n2=0, n3=0;

	for (int i=1;i<=N;i++)
	{
		cin >> a[i];

		if (a[i]==1) n1++;
		else if (a[i]==2) n2++;
		else if (a[i]==3) n3++;
	}

	int n_operation=0;

	for (int i=1;i<=n1;i++)
	{
		if (a[i]==2)
		{
			int j=find(1, n1+1, n1+n2);
			if (j!=0)
			{
				exchange(i,j);
				n_operation++;
			}
		}
		else if (a[i]==3)
		{
			int j=find(1, n1+n2+1, n1+n2+n3);
			if (j!=0)
			{
				exchange(i,j);
				n_operation++;
			}
		}
	}

	for (int i=n1+1; i<=n1+n2; i++)
	{
		if (a[i]==3)
		{
			int j=find(2, n1+n2+1, n1+n2+n3);
			if (j!=0)
			{
				exchange(i,j);
				n_operation++;
			}
		}
	}

	for (int i=1;i<=n1;i++)
		if (a[i]!=1) n_operation++;
	for (int i=n1+1;i<=n1+n2;i++)
		if (a[i]!=2) n_operation++;

	cout << n_operation << endl;

	return 0;
}



