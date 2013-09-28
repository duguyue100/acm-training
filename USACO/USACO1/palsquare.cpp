/*
ID: duguyue1
TASK: palsquare
LANG: C++
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int n;

string change(int m, int n)
{
	char base[]={'0','1','2','3','4','5','6','7','8','9',
				 'A','B','C','D','E','F','G','H','I','J'};

	string str="";
	int temp=m;

	while (temp!=0)
	{
		str=base[temp%n]+str;
		temp/=n;
	}

	return str;
}

bool check(int t, int n)
{
	string str=change(t,n);

	for (int i=0;i<str.length()/2;i++)
	{
		if (str[i]!=str[str.length()-i-1])
			return false;
	}

	return true;
}

int main(void)
{
	ifstream fin("palsquare.in");
	ofstream fout("palsquare.out");

	fin >> n;

	for (int i=1;i<=300;i++)
	{
		int t=i*i;
		if (check(t, n))
			fout << change(i,n) << " " << change(t,n) << endl;
	}

	return 0;
}



