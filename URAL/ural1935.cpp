#include<iostream>

using namespace std;

int main(void)
{
	int n=0;
	cin >> n;
	long max=-1;
	long sum=0;
	for (int i=1;i<=n;i++)
	{
		long t=0;
		cin >> t;
		sum+=t;
		if (t>max) max=t;
	}

	cout << max+sum;

	return 0;
}