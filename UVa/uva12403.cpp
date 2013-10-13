/*
 * uva12403.cpp
 *
 *  Created on: Oct 13, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>

using namespace std;

int main(void)
{
	int n=0;

	cin >> n;

	int sum=0;
	for (int i=1;i<=n;i++)
	{
		int temp=0;
		string str="";
		cin >> str;

		if (str=="donate")
		{
			cin >> temp;
			sum+=temp;
		}
		else if (str=="report")
			cout << sum << endl;
	}
}
