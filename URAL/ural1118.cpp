#include<iostream>
#include<cmath>

using namespace std;

double triviality(int n)
{
	double sum=1;
	for (int i=2;i<=n/4;i++)
		if (n%i==0)
		{
			sum+=(double)(i+n/i)/(double)n;
		}
	return sum;
}

int prime(int n)
{
	for (int i=2;i<=ceil(sqrt((double)n));i++)
		if (n%i==0) return false;
	return true;
}

int main(void)
{
	int I=0, J=0, N=0;
	cin >> I >> J;

	if (I==1)
	{
		cout << 1;
		return 0;
	}
	
	double min=1000000.0;
	for (int i=J;i>=I;i--)
	{
		if (prime(i))
		{
			cout << i;
			return 0;
		}
		else
		{
			double t=triviality(i);
			if (t<min)
			{
				min=t;
				N=i;
			}
		}
	}

	cout << N;

	return 0;
}