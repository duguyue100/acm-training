/*
ID: duguyue1
TASK: holstein
LANG: C++
*/

#include<iostream>
#include<cstdio>
#include<queue>

using namespace std;

struct State{
	bool s[26]; // path
	int c[26]; // cost
	short count;
};

int V=0, G=0;
int v[26]={0}, g[26][26]={0};

queue<State> q;

bool check(State s)
{
	for (int i=1;i<=V;i++)
		if (s.c[i]<v[i])
			return false;

	return true;
}

void search(State s, int n)
{
	if (check(s) && n>=0)
	{
		q.push(s);
		return ;
	}

	if (n>0)
	{
		search(s, n-1); // not choose
		State t=s;
		t.s[n]=true;
		for (int i=1;i<=V;i++)
			t.c[i]+=g[n][i];
		t.count++;

		search(t, n-1); // choose
	}
}

int length(State s)
{
	int sum=0;
	for (int k=1;k<=G;k++)
		if (s.s[k]==true)
			sum++;

	return sum;
}


int main(void)
{
	freopen("holstein.in", "r", stdin);
	freopen("holstein.out", "w", stdout);

	cin >> V;
	for (int i=1;i<=V;i++) cin >> v[i];
	cin >> G;
	for (int i=1;i<=G;i++)
		for (int j=1;j<=V;j++)
			cin >> g[i][j];

	for (int i=1;i<=G;i++)
	{
		bool flag=true;
		for (int j=1;j<=V;j++)
		{
			if (g[i][j]<v[j])
			{
				flag=false;
				break;
			}
		}

		if (flag==true)
		{
			cout << 1 << " " << i << endl;
			return 0;
		}
	}

	State t;
	for (int i=1;i<=G;i++)
		t.s[i]=false;
	for (int i=1;i<=V;i++)
		t.c[i]=0;
	t.count=0;


	search(t, G);

	State s=t;
	int minimum=G+1;
	while(!q.empty())
	{
		State st=q.front();
		q.pop();

		int leng=length(st);
		if (leng!=0)
		{
			if (leng<minimum)
			{
				minimum=leng;
				s=st;
			}
		}
	}

	int path[16]={0};
	int sum=0;
	for (int k=1;k<=G;k++)
		if (s.s[k]==true)
		{
			sum++;
			path[sum]=k;
		}
	cout << sum << " ";

	for (int k=1;k<sum;k++)
		cout << path[k] << " ";
	cout << path[sum] << endl;

	return 0;
}



