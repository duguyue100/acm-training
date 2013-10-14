/*
 * uva12157.cpp
 *
 *  Created on: Oct 14, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

int a[21]={0};

int calMile(int m)
{
	int sum=0;
	for (int i=1;i<=m;i++)
	{
		sum+=(a[i]/30+1)*10;
	}

	return sum;
}

int calJuice(int m)
{
	int sum=0;
	for (int i=1;i<=m;i++)
		sum+=(a[i]/60+1)*15;

	return sum;
}

int main(void)
{
	int n=0;
	cin >> n;

	for (int k=1;k<=n;k++)
	{
		int m=0;
		cin >> m;
		for (int i=1;i<=m;i++) cin >> a[i];

		int mile=calMile(m);
		int juice=calJuice(m);

		if (mile<juice)
			cout << "Case " << k << ": Mile " << mile << endl;
		else if (juice<mile)
			cout <<"Case " << k << ": Juice " << juice << endl;
		else cout <<"Case " << k << ": Mile Juice " << juice << endl;
	}
}
