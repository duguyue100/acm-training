#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

int n=0;

bool a[100]={0};

bool check(int m)
{
	int t=1;

	int count=n;
	while (count!=1)
	{
		count--;
		if (t==13) return false;

		a[t]=true;

		int c=t;
		int counter=0;
		while (counter<m)
		{
			c++;
			if (c<=n)
			{
				if (a[c]==false)
					counter++;
			}
			else
			{
				c=1;
				if (a[c]==false)
					counter++;
			}
		}

		t=c;
	}

	return true;
}

int main(void)
{
	cin >> n;
	while (n!=0)
	{
		int m=1;
		fill_n(a, 100, false);
		while (!check(m))
		{
			fill_n(a, 100, false);
			m++;
		}

		cout << m << endl;

		cin >> n;
	}

	return 0;
}
