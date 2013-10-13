/*
 * uva10550.cpp
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
	int a=0,b=0,c=0,d=0;

	cin >> a >> b >> c >> d;

	while (!(a==0 && b==0 && c==0 && d==0))
	{
		int sum=1080;

		if (b>a)
			sum+=9*(a+40-b);
		else sum+=9*(a-b);

		if (c<b)
			sum+=9*(c+40-b);
		else sum+=9*(c-b);

		if (d>c)
			sum+=9*(c+40-d);
		else sum+=9*(c-d);

		cout << sum << endl;

		cin >> a >> b >> c >> d;
	}
	return 0;
}
