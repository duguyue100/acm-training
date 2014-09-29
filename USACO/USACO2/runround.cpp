/*
ID: duguyue1
TASK: runround
LANG: C++
*/

#include<iostream>
#include<cstdio>
#include<sstream>
#include<algorithm>

using namespace std;

unsigned long m;

int a[10]={0};

bool checknum(string s)
{
	fill_n(a, 10, 0);
	for (size_t i=0;i<s.length();i++)
		a[s[i]-'0']++;

	for (int i=0;i<10;i++)
		if (a[i]>1) return false;

	return true;
}

bool check(unsigned long n)
{
	stringstream ss;
	ss << m;
	string s=ss.str();
	string str="";

	for (size_t i=0;i<s.length();i++)
		if (s[i]=='0') return false;

	if (!checknum(s)) return false;

	int leng=s.length();
	for (int i=1;i<=leng*3;i++) str+=s;

	fill_n(a, 10, 0);

	a[str[0]-'0']=1;
	size_t l=0;
	while (l<str.length())
	{
		l+=(str[l]-'0');
		if (l<str.length())
			a[str[l]-'0']++;
	}

	for (int i=0;i<10;i++) a[i]--;

	for (size_t i=0;i<s.length();i++)
	{
		if (a[s[i]-'0']<=0)
		{
			return false;
		}
	}

	return true;
}

int main(void)
{
	freopen("runround.in", "r", stdin);
	freopen("runround.out", "w", stdout);

	cin >> m;

	m++;
	while (!check(m))
	{
		m++;
	}

	cout << m << endl;

	return 0;
}
