#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

int a[101][101]={0};
int f[101][101]={0};

int main(void)
{
	freopen("triangle.txt","r",stdin);

	int n=100;
	
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
			cin >> a[i][j];
		}
	}

	f[1][1]=a[1][1];

	for (int i=2;i<=n;i++)
		for (int j=1;j<=i;j++)
		{
			f[i][j]=max(f[i-1][j-1],f[i-1][j])+a[i][j];
		}

	int maxm=f[n][1];
	for (int i=2;i<=n;i++)
		if (f[n][i]>maxm) maxm=f[n][i];

	cout << maxm << endl;

	cin >> n;

	return 0;
}