/*
 * uva12503.cpp
 *
 *  Created on: Oct 14, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>

using namespace std;

string a[101];

int decision(int n, int k)
{
	if (a[k]=="LEFT")
		return -1;
	else if (a[k]=="RIGHT")
		return 1;
	else
	{
		string st=a[k].substr(8);
		int m=0; int multiply=1;
		for (int i=st.length()-1;i>=0;i--)
		{
			m+=(int)(st[i]-'0')*multiply;
			multiply*=10;
		}
		return decision(n,m);
	}
}

int main(void)
{
	int n=0;

	cin >> n;

	for (int k=1;k<=n;k++)
	{
		int m=0;
		cin >> m;
		int result=0;
		getline(cin,a[0]);
		for (int i=1;i<=m;i++) getline(cin,a[i]);

		for (int i=1;i<=m;i++)
			result+=decision(m,i);

		cout << result << endl;
	}
	return 0;
}
