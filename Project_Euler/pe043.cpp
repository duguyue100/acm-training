#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

long a[]={0,1,2,3,4,5,6,7,8,9};

bool check(int e, int p)
{
	int n=a[e-1]+a[e-2]*10+a[e-3]*100;
	if (n%p==0) return true;
	else return false;
}

int main(void)
{
	long sum=0;
	do
	{
		if (a[0]!=0)
		{
			if (check(4,2) && check(5,3) && check(6,5) && check(7,7) &&
				check(8,11) && check(9,13) && check(10,17))
			{
				long p=1;
				long n=0;
				for (int i=9;i>=0;i--)
				{
					n+=p*a[i];
					p*=10;
				}

				sum+=n;

				cout << n << endl;
			}
		}
	}while (std::next_permutation(a, a+10));

	cout << sum << endl;
	return 0;
}
