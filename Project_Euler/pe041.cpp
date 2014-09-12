#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

bool a[10]={0};
int m[]={9,8,7,6,5,4,3,2,1};
long N=987654321;

bool isprime(long n)
{
	for (long i=2;i*i<=n;i++)
		if (n%i==0) return false;
	return true;
}

int main(void)
{
	long max=-1;
	for (int i=0;i<7;i++)
	{
		vector<short> num;
		for (int j=i;j<9;j++)
			num.push_back(m[j]);
		do
		{
			long p=1;
			long n=0;

			int length=num.size()-1;
			for (int k=length;k>=0;k--)
			{
				n+=p*num[k];
				p*=10;
			}

			cout << "       " << n << endl;
			if (isprime(n))
			{
				if (max<n) max=n;
			}
		}while (std::prev_permutation(num.begin(), num.end()));
	}

	cout << max << endl;

	return 0;
}
