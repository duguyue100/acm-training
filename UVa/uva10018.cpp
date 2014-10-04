#include<iostream>
#include<cstdio>
#include<algorithm>
#include<sstream>

using namespace std;

int N=0;

bool check(long t)
{
	stringstream ss;
	ss << t;
	string str=ss.str();

	for (size_t i=0;i<str.length();i++)
		if (str[i]!=str[str.length()-i-1])
			return false;

	return true;
}

long process(long t)
{
	stringstream ss;
	ss << t;
	string str=ss.str();
	long d=1;
	long s=0;
	for (size_t i=0;i<str.length();i++)
	{
		s+=(d*(str[i]-'0'));
		d*=10;
	}

	return s+t;
}

int main(void)
{
	cin >> N;
	for (int i=1;i<=N;i++)
	{
		long t=0;
		cin >> t;

		int counter=0;
		while (!check(t))
		{
			t=process(t);
			counter++;
		}

		cout << counter << " " << t << endl;
	}

	return 0;
}
