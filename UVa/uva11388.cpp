#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>

using namespace std;

int t;
int gcd(int l, int r)
{
	if (r==0) return l;
	else return gcd(r, l%r);
}


int main(void)
{
	cin >> t;
	for (int count=1;count<=t; count++)
	{
		int g=0, l=0;
		cin >> g >> l;

		if (gcd(g,l)==1)
		{
			if (g==1)
				cout << g << " " << l << endl;
			else cout << -1 << endl;
		}
		else
		{
			if (l%g==0)
			{
				cout << g << " " << l << endl;
			}
			else cout << -1 << endl;
		}
	}

	return 0;
}
