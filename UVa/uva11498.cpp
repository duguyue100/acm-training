#include<iostream>
#include<cmath>
#include<string>

using namespace std;

string judge(int n, int m, int x, int y)
{
	if (x>n && y>m) return "NE";
	else if (x<n && y>m) return "NO";
	else if (x>n && y<m) return "SE";
	else if (x<n && y<m) return "SO";
	else if (x==n || y==m) return "divisa";
}

int main(void)
{
	int K=0;
	int n=0, m=0;

	cin >> K;
	while (K!=0)
	{
		cin >> n >> m;

		for (int i=1;i<=K;i++)
		{
			int x=0, y=0;
			cin >> x >> y;

			cout << judge(n,m,x,y) << endl;
		}

		cin >> K;
	}

	return 0;
}