/*
 * uva12468.cpp
 *
 *  Created on: Oct 14, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(void)
{
	while (1)
	{
		int n=0, m=0;
		cin >> n >> m;

		if (n==-1 && m==-1) break;

		if (n>m)
		{
			int t=n;
			n=m;
			m=t;
		}

		int interval=m-n;
		int external=99-m+n+1;

		if (interval<external) cout << interval << endl;
		else cout << external << endl;
	}
	return 0;
}
