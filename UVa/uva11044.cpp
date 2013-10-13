/*
 * uva11044.cpp
 *
 *  Created on: Oct 13, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(void)
{
	int t=0;

	cin >> t;

	for (int i=1;i<=t;i++)
	{
		int n=0, m=0;

		cin >> n >> m;

		cout << (n/3)*(m/3) << endl;
	}
	return 0;
}
