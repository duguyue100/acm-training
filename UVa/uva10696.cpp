#include<iostream>
#include<cstdio>

using namespace std;

int n=0;

int f(int n)
{
	if (n>=101)
	{
		return n-10;
	}
	else return f(f(n+11));
}

int main(void)
{
	while (cin >> n && n)
	{
		cout << "f91(" << n << ") = " << f(n) << endl;
	}

	return 0;
}
