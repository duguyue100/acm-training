/*
 * uva272.cpp
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
	char ch;
	int counter=1;
	while (scanf("%c", &ch)==1)
	{
		if (ch=='\"')
		{
			if (counter%2==1)
			{
				cout << "``";
			}
			else cout << "\'\'";

			counter++;
		}
		else cout << ch;
	}
}
