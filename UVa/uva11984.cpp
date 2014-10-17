#include<iostream>
#include<cstdio>

using namespace std;

int n=0;

int main(void)
{
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		double c=0, f=0;

		cin >> c >> f;

		c=(9.0/5.0)*c+32;
		c+=f;
		c=(c-32)*(5.0/9.0);

		printf("Case %d: %.2f\n", i, c);
	}

	return 0;
}
