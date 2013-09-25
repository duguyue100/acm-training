/*
 * uva10300.cpp
 *
 *  Created on: Sep 25, 2013
 *      Author: dgyHome
 */

#include<iostream>

using namespace std;

int main(void)
{
	int n=0;
	cin >> n;

	for (int i=1;i<=n;i++)
	{
		int p=0;
		cin >> p;
		long long sum=0;
		for (int j=1;j<=p;j++)
		{
			long long t1=0;
			long long t2=0;
			long long t3=0;
			cin >> t1 >> t2 >> t3;
			sum+=t1*t3;
		}
		cout << sum << endl;
	}
}

