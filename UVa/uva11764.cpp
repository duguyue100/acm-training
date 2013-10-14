/*
 * uva11764.cpp
 *
 *  Created on: Oct 14, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

int main(void)
{
	int t=0;
	cin >> t;

	for (int k=1;k<=t;k++)
	{
		int n=0;
		cin >> n;
		int high=0;
		int low=0;

		int n1=0;
		cin >> n1;
		int i=1;
		while (i<n)
		{
			int n2=0;
			cin >> n2;
			if (n1<n2) high++;
			else if (n1>n2) low++;

			n1=n2;
			i++;
		}
		cout << "Case " << k << ": " << high << " " << low << endl;
	}
}
