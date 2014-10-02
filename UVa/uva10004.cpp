// Bipartite graph
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

bool a[300][300];
int n=0, m=0;
vector<int> l, r;

void init()
{
	for (int i=0;i<300;i++)
		fill_n(a[i], 300, false);
	l.clear();
	r.clear();
}

bool check(int k, int d)
{
	bool kflag=false;
	bool dflag=false;
	for (size_t i=0;i<l.size();i++)
	{
		if (l[i]==k) kflag=true;
		else if (l[i]==d) dflag=true;
	}

	if (kflag && dflag) return true;

	kflag=false;
	dflag=false;
	for (size_t i=0;i<r.size();i++)
	{
		if (r[i]==k) kflag=true;
		else if (r[i]==d) dflag=true;
	}

	if (kflag && dflag) return true;

	return false;
}

bool checkl(int k)
{
	for (size_t i=0;i<l.size();i++)
		if (l[i]==k) return true;

	return false;
}

bool checkr(int k)
{
	for (size_t i=0;i<r.size();i++)
		if (r[i]==k) return true;

	return false;
}

int main(void)
{
	while (cin >> n && n)
	{
		cin >> m;
		init();

		for (int i=1;i<=m;i++)
		{
			int x, y;
			cin >> x >> y;
			a[x][y]=true;
			a[y][x]=true;
		}

		bool flag=true;
		l.push_back(0);
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
			{
				if (i!=j && a[i][j]==true)
				{
					if (check(i,j))
					{
						flag=false;
						cout << "NOT BICOLORABLE." << endl;
						break;
					}
					else
					{
						if (checkl(i) && !checkr(j)) r.push_back(j);
						else if (checkr(i) && !checkr(j)) l.push_back(j);
					}
				}
			}

			if (flag==false)
				break;
		}

		if (flag==true)
			cout << "BICOLORABLE." << endl;
	}

	return 0;
}
