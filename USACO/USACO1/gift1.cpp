/*
ID: duguyue1
TASK: gift1
LANG: C++
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct Person{
	string name;
	int initial;
	int money;
}a[11];

int searchName(string Name, int n)
{
	for (int i=1;i<=n;i++)
	{
		if (Name==a[i].name)
			return i;
	}

	return -1;
}

int main(void)
{
	ifstream fin("gift1.in");
	ofstream fout("gift1.out");

	int n=0;
	fin >> n;

	for (int i=1;i<=n;i++)
		fin >> a[i].name;

	for (int i=1;i<=n;i++)
	{
		string Name=""; fin >> Name;
		int j=searchName(Name, n);
		int people=0, initMoney=0, money=0;

		fin >> initMoney >> people;
		a[j].initial+=initMoney;
		a[j].money+=initMoney;
		if (people!=0) money=initMoney/people;
		for (int i=1;i<=people;i++)
		{
			string temp="";
			fin >> temp;
			int t=searchName(temp, n);
			a[j].initial-=money;
			a[t].initial+=money;
		}
	}

	for (int i=1;i<=n;i++)
	{
		fout << a[i].name << " " << a[i].initial-a[i].money << endl;
	}

	return 0;
}
