#include<iostream>
#include<algorithm>
#include<cstdio>
#include<map>
#include<cmath>

using namespace std;

long N;

long sumd(long n)
{
	long sum=0;
	while (n!=0)
	{
		sum+=(n%10);
		n/=10;
	}

	return sum;
}

long f(long n)
{
	while (n>=10)
	{
		n=sumd(n);
	}

	return n;
}

int main(void)
{
	while (cin >> N && N!=0)
	{
		cout << f(N) << endl;
	}

	return 0;
}
