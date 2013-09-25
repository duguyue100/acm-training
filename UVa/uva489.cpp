/*
 * uva489.cpp
 *
 *  Created on: Sep 25, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<string>
#include<cstddef>

using namespace std;

bool examine(string str)
{
	for (size_t i=0;i<str.length();i++)
		if (str[i]!='*')
			return false;

	return true;
}

int check(string st1, string st2)
{
	string str=st1;
	int draw=0;
	for (size_t i=0;i<st2.length();i++)
	{
		if (str.find(st2[i])!=string::npos)
		{
			size_t found=str.find(st2[i]);
			str[found]='*';
		}
		else draw++;

		if (examine(str) && draw<7)
		{
			cout << "You win." << endl;
			return 0;
		}
	}

	if (draw<7 && !examine(str))
		cout << "You chickened out." << endl;
	else cout << "You lose." << endl;

	return 0;
}

int main(void)
{
	int round=0;
	string st1="";
	string st2="";

	while (true)
	{
		cin >> round;
		if (round==-1) return 0;
		cin >> st1;
		cin >> st2;

		string stone="";
		string sttwo="";

		for (size_t i=0;i<st1.length();i++) if (stone.find(st1[i])==string::npos) stone+=st1[i];
		for (size_t i=0;i<st2.length();i++) if (sttwo.find(st2[i])==string::npos) sttwo+=st2[i];

		cout << "Round " << round << endl;
		check(stone, sttwo);
	}

	return 0;
}
