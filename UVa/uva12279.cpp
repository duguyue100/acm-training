/*
 * uva12279.cpp
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
	int counter=1;
	while (1)
	{
		int n=0;
		cin >> n;
		if (n==0) break;

		int sum=0;
		for (int i=1;i<=n;i++)
		{
			int temp=0;
			cin >> temp;
			if (temp==0) sum++;
		}

		cout << "Case " << counter << ": " << n-2*sum << endl;

		counter++;
	}

	return 0;
}
