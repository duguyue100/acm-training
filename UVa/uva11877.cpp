#include<iostream>
#include<cstdio>

using namespace std;

int n=0;

int main(void)
{
	while (cin >> n && n)
	{
		int sum=0;

		while (n>=3)
		{
			sum+=(n/3);
			n=(n/3)+(n%3);
		}

		if (n==2) sum++;

		cout << sum << endl;
	}

	return 0;
}
