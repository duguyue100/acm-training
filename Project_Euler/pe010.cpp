#include<iostream>
#include<cmath>

using namespace std;

int prime(int n)
{
	int max=static_cast<int>(sqrt((double)n));
	for (int i=2;i<=max;i++)
	{
		if (n%i==0)
			return 0;
	}

	return 1;
}

int main(void)
{
	long long sum=2;

	for (long i=3;i<2000000;i++)
	{
		if (prime(i)==1)
		{
			sum+=i;
		}
	}
	
	cout << sum;

	cin >> sum;

	return 0;
}