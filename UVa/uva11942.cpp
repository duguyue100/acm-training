/*
 * uva11942.cpp
 *
 *  Created on: Oct 14, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int a[11]={0};

bool increasing()
{
	for (int i=1;i<10;i++)
		if (a[i]>a[i+1]) return false;

	return true;
}

bool decreasing()
{
	for (int i=1;i<10;i++)
		if (a[i]<a[i+1]) return false;

	return true;
}

int main(void)
{
	int n=0;
	cin >> n;
	cout << "Lumberjacks:" << endl;
	for (int k=1;k<=n;k++)
	{
		for (int i=1;i<=10;i++)
			cin >> a[i];

		if (increasing() || decreasing())
			cout << "Ordered" << endl;
		else cout << "Unordered" << endl;
	}

	return 0;
}


