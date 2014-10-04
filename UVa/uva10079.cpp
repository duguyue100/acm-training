#include<iostream>
#include<cstdio>

using namespace std;

long long a=0;

int main(void)
{
	while (cin >> a && a>=0)
	{
		cout << a*(a+1)/2+1 << endl;
	}

	return 0;
}
