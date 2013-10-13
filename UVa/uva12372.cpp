/*
 * uva12372.cpp
 *
 *  Created on: Oct 13, 2013
 *      Author: dgyHome
 */

#include<iostream>

using namespace std;

int main(void)
{
	int t=0;

	cin >> t;

	int counter=1;
	for (int i=1;i<=t;i++)
	{
		int a,b,c;

		cin >> a >> b >> c;

		if (a<=20 && b<=20 && c<=20)
			cout << "Case " << counter << ": good" << endl;
		else cout << "Case " << counter << ": bad" << endl;

		counter++;
	}
	return 0;
}
