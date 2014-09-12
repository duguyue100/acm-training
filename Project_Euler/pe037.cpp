#include<iostream>
#include<cstdio>

using namespace std;

bool isprime(int n)
{
	if (n==1) return false;
	for (int i=2;i*i<=n;i++)
		if (n%i==0)	return false;

	return true;
}

bool check(int n)
{
	// forward

	int n_temp=n;

	int p=1;
	while (n_temp!=0)
	{
		if (isprime(n_temp))
		{
			n_temp/=10;
			p*=10;
		}
		else return false;
	}

	// backward

	n_temp=n;
	p/=10;
	while (p!=0)
	{
		if (isprime(n_temp))
		{
			n_temp-=p*(n_temp/p);
			p/=10;
		}
		else return false;
	}

	return true;
}

int main(void)
{
	int n=23;

	int sum=0;
	int counter=0;

	while (counter<11)
	{
		if (check(n))
		{
			cout << n << " " << counter <<  endl;
			sum+=n;
			counter++;
		}
		n++;
	}

	cout << sum;

	return 0;
}
