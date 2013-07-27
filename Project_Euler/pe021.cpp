#include<iostream>
#include<cmath>

using namespace std;

int d(int n)
{
	int sum=0;
	for (int i=1;i<=n/2;i++)
	{
		if (n%i==0)
			sum+=i;
	}

	return sum;
}

int main(void)
{
	long sum=0;
	for (int a=1;a<=10000;a++)
	{
		int b=d(a);
		int t=d(b);
		if (a==t && a!=b)
		{
			sum+=a;
			cout<< a << ": " << b << " " << t << endl;
		}
		//else cout << a << endl;

		//cout<< a << ": " << b << " " << a << endl;
	}

	cout << sum << endl;

	cin >> sum;
	return 0;
}