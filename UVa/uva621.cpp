/*
 * uva621.cpp
 *
 *  Created on: Oct 14, 2013
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

	for (int i=1;i<=n;i++)
	{
		string str="";
		cin >> str;

		if (str=="1" || str=="4" || str=="78")
		{
			cout << "+" << endl;
		}
		else if (str[str.length()-2]=='3' && str[str.length()-1]=='5')
		{
			cout << "-" << endl;
		}
		else if (str[0]=='9' && str[str.length()-1]=='4')
		{
			cout << "*" << endl;
		}
		else if (str.substr(0,3)=="190")
		{
			cout << "?" << endl;
		}
	}
	return 0;
}
