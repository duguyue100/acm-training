#include<iostream>

using namespace std;

int a[101][101]={0};
int l[105]={0};
int r[105]={0};
int n=0;

bool checkl(int m, int d)
{
	for (int i=1;i<=d;i++)
		if (l[i]==m) return false;
	return true;
}

bool checkr(int m, int d)
{
	for (int i=1;i<=d;i++)
		if (r[i]==m) return false;
	return true;
}

int main(void)
{
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		int t=0, k=0;
		cin >> t;
		while (t!=0)
		{
			a[i][t]=1;
			a[t][i]=1;
			cin >> t;
			k++;
		}
		if (k==0)
		{
			cout << 0;
			return 0;
		}
	}

	int k=1,t=1;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if (i!=j)
			{
				if (a[i][j]==1)
				{
					if (checkl(i,k) && checkr(i,t) && checkl(j,k) && checkr(j,t))
					{
						l[k]=i; r[t]=j;
						k++; t++;
					}
					else if (checkl(i,k) && !checkr(i,t) && checkl(j,k) && checkr(j,t))
					{
						l[k]=j;
						k++;
					}
					else if (!checkl(i,k) && checkr(i,t) && checkl(j,k) && checkr(j,t))
					{
						r[t]=j;
						t++;
					}
				}
			}
		}
	}

	cout << k-1 << endl;
	for (int i=1;i<k;i++)
		cout << l[i] << " ";

	return 0;
}