#include<iostream>
#include<cstdio>

using namespace std;

int n=0, k=0;

int main(void)
{
	while (cin >> n >> k)
	{
		int sum=n;

		while (n>=k)
		{
			sum+=(n/k);
			n=(n/k)+(n%k);
		}

		cout << sum << endl;
	}

	return 0;
}
