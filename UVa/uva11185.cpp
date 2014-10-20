#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>

using namespace std;

long N;

string ternary(long n)
{
	if (n==0) return "0";

	string temp="";

	while (n!=0)
	{
		int t=n%3;
		temp=(char)('0'+t)+temp;
		n/=3;
	}

	return temp;
}

int main(void)
{
	while (cin >> N && N>=0)
	{
		cout << ternary(N) << endl;
	}

	return 0;
}
