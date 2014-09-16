#include<iostream>

using namespace std;

int f[100]={0}, ans[100]={0};
bool g[100][100]={0}, v[100]={0};
int n=0, m=0, c=0;

void dfs(int k)
{
	for (int i=1;i<=n;i++)
		if (g[k][i])
		{
			g[k][i]=false;
			g[i][k]=false;
			dfs(i);
		}
	m++;
	ans[m]=k;
}

int main(void)
{
	cin >> n >> m;

	for (int i=1;i<=m;i++)
	{
		int x=0, y=0;
		g[x][y]=true;
		g[y][x]=true;
		f[x]++;
		f[y]++;
	}

	m=0;
	int k1=0;
	for (int i=1;i<=n;i++)
	{
		if (f[i]%2==1) k1++;
		if (k1>2)
		{
			cout << "error" << endl;
			return 0;
		}
		if (f[i]%2 && c==0) c=i;
	}

	if (c==0) c=1;
	dfs(x);

	for (int i=m;i>=1;i--) cout << ans[i] << endl;
	return 0;
}
