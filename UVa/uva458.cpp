/*
 * uva458.cpp
 *
 *  Created on: Sep 25, 2013
 *      Author: dgyHome
 */


#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(void)
{
	char st[100000];
	while (gets(st))
	{
		for (int i=0;st[i]!='\0';i++)
			printf("%c",(char)(st[i]-7));
		printf("\n");
	}
	return 0;
}
