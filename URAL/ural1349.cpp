#include<iostream>

using namespace std;

int main(void)
{
	int n=0;
	cin >> n;

	for (int a=1;a<=100;a++)
		for (int b=1;b<=100;b++)
			for (int c=1;c<=100;c++)
			{
				if (a!=b && b!=c && a!=c)
				{
					if (pow((double)a,n)+pow((double)b,n)==pow((double)c,n))
					{
						cout << a << " " << b << " " << c;
						return 0;
					}
				}
			}

	cout << -1;

	return 0;
}