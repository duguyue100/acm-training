/*
 * uva11687.cpp
 *
 *  Created on: Oct 16, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>

using namespace std;

int main(void)
{
	while (1)
	{
		string str="";
		cin >> str;

		if (str=="END") break;

		if (str=="1") cout << 1 << endl;
		else if (str.length()==1) cout << 2 << endl;
		else if (str.length()<10) cout << 3 << endl;
		else cout << 4 << endl;
	}
	return 0;
}
