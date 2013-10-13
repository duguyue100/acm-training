/*
 * uva11332.cpp
 *
 *  Created on: Oct 13, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>

using namespace std;

string f(string st)
{
	long sum=0;
	for (int i=0;i<st.length();i++)
		sum+=(long)(st[i]-'0');

	string result="";

	while (sum!=0)
	{
		result=(char)(sum%10+'0')+result;
		sum/=10;
	}

	return result;
}

int main(void)
{

	while (1)
	{
		string str="";

		cin >> str;

		if (str=="0") break;

		while (str.length()!=1)
		{
			str=f(str);
		}

		cout << str << endl;

	}

	return 0;
}


