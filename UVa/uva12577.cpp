/*
 * uva12577.cpp
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
	int counter=1;
	while (1)
	{
		string str="";
		cin >> str;
		if (str=="*") break;

		if (str=="Hajj")
			cout << "Case " << counter << ": Hajj-e-Akbar" << endl;
		else if (str=="Umrah")
			cout << "Case " << counter << ": Hajj-e-Asghar" << endl;

		counter++;
	}
}


