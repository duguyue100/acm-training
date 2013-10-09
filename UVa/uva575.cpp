/*
 * uva575.cpp
 *
 *  Created on: Oct 9, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cmath>
#include<cstdio>
#include<string>

using namespace std;

int main(void)
{
	string str="";

	while (1)
	{
		cin >> str;
		if (str=="0") break;
		long long sum=0;

		for (int i=str.length()-1;i>=0;i--)
			sum+=(long long)(pow(double(2),double(str.length()-i))-1)*(str[i]-'0');

		cout << sum << endl;

	}
	return 0;
}
