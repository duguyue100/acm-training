#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>

using namespace std;

long N;

int main(void)
{
	while (cin >> N)
	{
		int sum=N;

		while (N>=3)
		{
			sum+=(N/3);
			N=(N/3)+(N%3);
		}

		if (N==2) sum++;

		cout << sum << endl;
	}

	return 0;
}
