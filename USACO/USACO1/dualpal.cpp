/*
ID: duguyue1
TASK: dualpal
LANG: C++
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

string change(int s, int n)
{
	char base[10]={'0','1','2','3','4','5','6','7','8','9'};

	int temp=s;
	string str="";
	while (temp!=0)
	{
		str=base[temp%n]+str;
		temp/=n;
	}

	return str;
}

bool checkString(string str)
{
	for (int i=0;i<str.length()/2;i++)
		if (str[i]!=str[str.length()-i-1])
			return false;

	return true;
}

bool check(int s)
{
	int count=0;
	for (int i=2;i<=10;i++)
	{
		if (checkString(change(s,i))) count++;
		if (count==2) return true;
	}

	return false;
}

int main(void)
{
	ifstream fin("dualpal.in");
	ofstream fout("dualpal.out");

	int n,s;
	fin >> n >> s;
	s++;
	int counter=1;
	while (counter<=n)
	{
		if (check(s))
		{
			fout << s << endl;
			counter++;
		}
		s++;
	}

	return 0;
}
