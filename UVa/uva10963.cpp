/*
 * uva10963.cpp
 *
 *  Created on: Oct 14, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(void)
{
	int n=0;
	cin >> n;

	for (int k=1;k<=n;k++)
	{
		int m=0;
		cin >> m;
		int n1,n2;
		cin >> n1 >> n2;
		int diff=n1-n2;
		bool flag=true;
		for (int i=1;i<m;i++)
		{
			cin >> n1 >> n2;
			if (n1-n2!=diff)
			{
				flag=false;
			}
		}

		if (flag==true) cout << "yes" << endl;
		else cout << "no" << endl;
		if (k!=n) cout << endl;
	}

	return 0;
}
