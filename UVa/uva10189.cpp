#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int m=0,n=0;
	int a[102][102]={0};
	cin >> n >> m;
	int field=1;
	while (n!=0 && m!=0)
	{
		char ch;
		for (int i=1;i<=n;i++)
		{
			for (int j=1;j<=m;j++)
			{		
				cin >> ch;
				if (ch=='*')
				{
					a[i-1][j]++;a[i+1][j]++;
					a[i][j-1]++;a[i][j+1]++;
					a[i-1][j-1]++;a[i+1][j-1]++;
					a[i-1][j+1]++;a[i+1][j+1]++;
					a[i][j]=-100;
				}
			}
		}
		cout << "Field #" << field << ":" << endl;
		for (int i=1;i<=n;i++)
		{
			for (int j=1;j<=m;j++)
			{
				if (a[i][j]<0)
					cout << '*';
				else cout << a[i][j];
			}
			cout << endl;
		}
		cin >> n >> m;
		if (n!=0 && m!=0)
			cout << endl;

		for (int i=0;i<102;i++)
			for (int j=0; j<102;j++)
				a[i][j]=0;
		field++;
	}

	return 0;
}