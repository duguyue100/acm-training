#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	while(1)
    {
        a = a % b;
		if (a == 0)
			return b;
		b = b % a;

        if( b == 0 )
			return a;
    }
}

int main(void)
{
	int n=0, m=0;
	cin >> n >> m;
	if (n<m)
	{
		int t=n;
		n=m;
		m=t;
	}

	if (((n-1)/(m-1))*(m-1)!=(n-1))
	{
		int a=gcd(n-1,m-1);
		cout << ((n-1)/a+1+(m-1)/a+1-3)*a;
	}
	else cout << n-1;
	cin >> n;
	return 0;
}