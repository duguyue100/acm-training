/*
 * uva119.cpp
 *
 *  Created on: Oct 17, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>

using namespace std;

struct Person
{
	string name;
	int initial;
	int money;
}a[11];

int searchName(string Name, int n)
{
	for (int i=1;i<=n;i++)
		if (Name==a[i].name)
			return i;

	return -1;
}

int main(void)
{
	int n=0;
	int flag=0;

	while(scanf("%d",&n)!=EOF)
	{
		for (int i=1;i<=n; i++)
			cin >> a[i].name;

		for (int i=1;i<=n;i++)
		{
			string Name="";
			cin >> Name;
			int j=searchName(Name,n);
			int people=0, initMoney=0, money=0;

			cin >> initMoney >> people;
			a[j].initial+=initMoney;
			a[j].money+=initMoney;

			if (people!=0) money=initMoney/people;

			for (int k=1;k<=people;k++)
			{
				string temp="";
				cin >> temp;
				int t=searchName(temp,n);
				a[j].initial-=money;
				a[t].initial+=money;
			}
		}

		if (flag==1)
			cout << endl;
		flag=1;

		for (int i=1;i<=n;i++)
			cout << a[i].name << " "
			<< a[i].initial-a[i].money << endl;

		for (int i=0;i<11;i++)
		{
			a[i].name="";
			a[i].initial=0;
			a[i].money=0;
		}

	}
	return 0;
}
