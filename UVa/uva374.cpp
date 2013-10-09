/*
 * uva374.cpp
 *
 *  Created on: Oct 9, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

long long power(long long x, long long y, long long z)
{
	long long b=1;
	while (y>0)
	{
		if (y & 1)
			b=(b*x)%z;
		y=y>>1;
		x=(x*x)%z;
	}

	return b;
}

int main(void)
{
	long long b=0, p=0, m=0;

	while (scanf("%d %d %d", &b, &p, &m)==3)
		cout << power(b,p,m) << endl;
	return 0;
}
