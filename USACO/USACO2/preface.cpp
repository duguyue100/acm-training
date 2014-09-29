/*
ID: duguyue1
TASK: preface
LANG: C++
*/

#include<iostream>
#include<cstdio>
#include<map>

using namespace std;

int n=0;
map<char, int> a;
map<int, char> d;

string process(int m)
{
	string str="";

	int t=m/1000;
	if (t>0)
	{
		m-=(t*1000);
		for (int i=1;i<=t;i++) str+='M';
	}

	if (m>=900)
	{
		m-=900;
		str+="CM";
	}

	t=m/500;
	if (t==1)
	{
		m-=500;
		str+='D';
	}

	t=m/100;
	if (t==4)
	{
		m-=400;
		str+="CD";
	}
	else if (t<4&& t>0)
	{
		m-=(t*100);
		for (int i=1;i<=t;i++) str+='C';
	}

	if (m>=90)
	{
		m-=90;
		str+="XC";
	}

	t=m/50;
	if (m<90 && t==1)
	{
		m-=(t*50);
		str+='L';
	}

	if (m>=40)
	{
		m-=40;
		str+="XL";
	}

	t=m/10;
	if (m<40 && t>0)
	{
		m-=(t*10);
		for (int i=1;i<=t;i++) str+='X';
	}

	if (m==9)
	{
		m-=9;
		str+="IX";
	}

	t=m/5;
	if (m<9 && t==1)
	{
		m-=5;
		str+='V';
	}

	if (m==4)
	{
		m-=4;
		str+="IV";
	}

	if (m<4) for (int i=1;i<=m;i++) str+='I';

	return str;
}

void add(string str)
{
	for (size_t i=0;i<str.length();i++)
		a[str[i]]++;
}

void init()
{
	d[1]='I';
	d[5]='V';
	d[10]='X';
	d[50]='L';
	d[100]='C';
	d[500]='D';
	d[1000]='M';

	a[d[1]]=0;
	a[d[5]]=0;
	a[d[10]]=0;
	a[d[50]]=0;
	a[d[100]]=0;
	a[d[500]]=0;
	a[d[1000]]=0;
}

int main(void)
{
	freopen("preface.in", "r", stdin);
	freopen("preface.out", "w", stdout);

	cin >> n;

	init();

	for (int i=1;i<=n;i++)
	{
		string str=process(i);
		add(str);
	}

	for (map<int, char>::iterator it=d.begin(); it!=d.end(); it++)
	{
		if (a[it->second]!=0)
		{
			cout << it->second << " " << a[it->second] << endl;
		}
	}

	return 0;
}



