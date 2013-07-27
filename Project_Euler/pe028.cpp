#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	long long sum=1;
	long long product=2;
	long long t=1;
	for (int i=2;i<=501;i++)
	{
		for (int j=1;j<=4;j++)
		{
			t+=product;
			sum+=t;
		}

		product+=2;
	}

	cout << sum;

	return 0;
}