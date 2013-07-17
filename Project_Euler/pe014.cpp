#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	long long n=2;

	long long max=-1;
	long long maxn=2;
	while (n<=1000000)
	{
		long long t=n;
		long long counter=0;
		while (t!=1)
		{
			if (t%2==0)
				t/=2;
			else if (t%2==1)
				t=t*3+1;
			counter++;
		}
		counter++;
		cout << n << " " << counter << endl;
		if (counter>max)
		{
			max=counter;
			maxn=n;
		}
		n++;
	}

	cout << maxn;

	cin >> n;

	return 0;
}