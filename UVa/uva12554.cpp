/*
 * uva12554.cpp
 *
 *  Created on: Oct 14, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string>

using namespace std;

int main(void)
{
	string song[]={"Happy","birthday","to","you",
			"Happy","birthday","to","you",
			"Happy","birthday","to","Rujia",
			"Happy","birthday","to","you"
	};
	string a[101];
	int n=0;
	cin >> n;

	for (int i=1;i<=n;i++) cin >> a[i];

	int times=n/16+1;

	int counter=1;
	int k=0;

	while (k<times)
	{
		for (int i=0;i<16;i++)
		{
			cout << a[counter] << ": " << song[i] << endl;
			counter++;
			if (counter>n) counter=1;
		}

		k++;
	}

	return 0;
}
