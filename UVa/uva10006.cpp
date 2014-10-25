#include<iostream>
#include<cstdio>

using namespace std;

long n=0;

bool prime(long n)
{
	if (n<2) return false;

	if (n<=3) return true;

	if (!(n%2) || !(n%3)) return false;

	for (int i=5;i*i<=n;i+=6)
		if (!(n%i) || !(n%(i+2))) return false;

	return true;
}

long powmod(long base, long exp, long modulus)
{
	base %= modulus;

	long result=1;

	while (exp > 0)
	{
		if (exp & 1) result=(result * base) % modulus;
		base=(base*base)%modulus;
		exp >>=1;
	}

	return result;
}

int main(void)
{
	while (cin >> n && n!=0)
	{
		if (prime(n))
		{
			cout << n << " is normal." << endl;
		}
		else
		{
			bool flag=true;
			for (int i=2;i<=n-1;i++)
			{
				if (powmod(i, n, n)!=i)
				{
					flag=false;
					break;
				}
			}

			if (flag==true) cout << "The number " << n << " is a Carmichael number." << endl;
			else cout << n << " is normal." << endl;
		}
	}

	return 0;
}
