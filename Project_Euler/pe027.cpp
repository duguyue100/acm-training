#include<iostream>
#include<cmath>

using namespace std;

int prime(long long product)
{
	if (product<=1) return 0;
	if (product==2) return 1;
	for (long long i=2;i<=(long long)sqrt((double)product);i++)
	{
		if (product%i==0)
			return 0;
	}

	return 1;
}

int check(int a, int b)
{
	int counter=0;
	int n=0;
	long long product=n*n+a*n+b;

	while (prime(product))
	{
		counter++;
		n++;
		product=n*n+a*n+b;
	}

	return counter;
}

int main(void)
{
	int counter=prime(1);
	int max=-1;
	long long product=0;
	for (int i=-999;i<=999;i++)
	{
		for (int j=-999;j<=999;j++)
		{
			int count=check(i,j);
			if (count > max)
			{
				max=count;
				product=i*j;

				cout << count << ": " << i << " " << j << ": " << product << endl;
			}
		}
	}

	cout << max;

	return 0;
}