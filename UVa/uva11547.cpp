/*
 * uva11547.cpp
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
		long long n;

		cin >> n;

		long long result=0;

		result=((n*567/9+7492)*235/47-498)/10;
		result%=10;
		if (result<0) result*=-1;

		cout << result << endl;
	}


	return 0;
}
