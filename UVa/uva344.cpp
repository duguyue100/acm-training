#include<iostream>
#include<cstdio>
#include<map>

using namespace std;

int n=0;

map<char, int> a;
map<int, char> b;

void init()
{
	b[1]='i';
	b[5]='v';
	b[10]='x';
	b[50]='l';
	b[100]='c';

	a[b[1]]=0;
	a[b[5]]=0;
	a[b[10]]=0;
	a[b[50]]=0;
	a[b[100]]=0;
}

string process(int m)
{
	string st="";

	if (m==100) st+="c";
	else
	{
		if (m>=90)
		{
			m-=90;
			st+="xc";
		}

		int t=m/50;
		if (m<90 && t==1)
		{
			m-=(t*50);
			st+="l";
		}

		if (m>=40)
		{
			m-=40;
			st+="xl";
		}

		t=m/10;
		if (m<40 && t>0)
		{
			m-=(t*10);
			for (int i=1;i<=t;i++) st+="x";
		}

		if (m==9)
		{
			m-=9;
			st+="ix";
		}

		t=m/5;
		if (m<9 && t==1)
		{
			m-=5;
			st+="v";
		}

		if (m==4)
		{
			m-=4;
			st+="iv";
		}

		if (m<4) for (int i=1;i<=m;i++) st+="i";
	}

	return st;
}

void counting(string str)
{
	for (size_t i=0;i<str.length();i++)
	{
		a[str[i]]++;
	}
}

int main(void)
{
	init();
	while (cin >> n && n!=0)
	{
		a.clear();
		for (int i=1;i<=n;i++)
		{
			string str=process(i);
			counting(str);
		}

		cout << n << ": " << a['i'] << " i, " << a['v'] << " v, " << a['x'] << " x, " << a['l'] << " l, " << a['c'] << " c" << endl;
	}

	return 0;
}
