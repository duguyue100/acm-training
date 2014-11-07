/*
ID: duguyue1
TASK: lamps
LANG: C++
*/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

bool l[101], l1[101];
int a[101], b[101];
string r[50];

int N, C, c=0;

// false = ON, true = OFF
void change(int n)
{
	if (l[n]==true) l[n]=false;
	else l[n]=true;
}

void option1()
{
	for (int i=1;i<=N;i++) change(i);
}

void option2()
{
	for (int i=1;i<=N;i++)
		if (i%2==1) change(i);
}

void option3()
{
	for (int i=1;i<=N;i++)
		if (i%2==0) change(i);
}

void option4()
{
	for (int i=1;i<=N;i++)
		if ((i-1)%3==0) change(i);
}

bool check()
{
	int n=1;
	while (a[n]!=0)
	{
		if (l[a[n]]==true)
			return false;
		n++;
	}
	n=1;
	while (b[n]!=0)
	{
		if (l[b[n]]==false)
			return false;
		n++;
	}

	return true;
}

string print()
{
	string st="";

	for (int i=1;i<=N;i++)
		if (l[i]==true) st+="0";
		else st+="1";

	return st;
}

void dfs(int n)
{
	if (n<C)
	{
		for (int i=1;i<=4;i++)
		{
			if (i==1)
			{
				option1();
				dfs(n+1);
				option1();
			}

			if (i==2)
			{
				option2();
				dfs(n+1);
				option2();
			}

			if (i==3)
			{
				option3();
				dfs(n+1);
				option3();
			}

			if (i==4)
			{
				option4();
				dfs(n+1);
				option4();
			}
		}
	}

	if (n==C)
	{
		if (check())
		{
			string st=print();
			bool flag=true;
			for (int d=0;d<c;d++)
				if (r[d]==st)
					flag=false;

			if (flag==true)
			{
				r[c]=st;
				c++;
			}
		}
	}
}

int main(void)
{
	freopen("lamps.in", "r", stdin);
	freopen("lamps.out", "w", stdout);

	cin >> N;
	cin >> C;

	int m=0, count=1;
	while (cin >> m && m!=-1)
	{
		a[count]=m;
		count++;
	}
	count=1;
	while (cin >> m && m!=-1)
	{
		b[count]=m;
		count++;
	}

	while (C>4) C-=2;

	if (C==0)
	{
		if (check()) cout << print() << endl;
		else cout << "IMPOSSIBLE" << endl;
	}
	else
	{
		dfs(0);

		if (c==0) cout << "IMPOSSIBLE" << endl;
		else
		{
			sort(r, r+c);
			for (int i=0;i<c;i++)
				cout << r[i] << endl;
		}
	}

	return 0;
}
