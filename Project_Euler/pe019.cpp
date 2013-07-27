#include<iostream>
#include<cmath>

using namespace std;

int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

int leap(int n)
{
	if (n%100==0)
	{
		if (n%4==0)
			return 1;
		else return 0;
	}
	else
	{
		if (n%4==0)
			return 1;
		else return 0;
	}
}

int main(void)
{
	long sum=0;
	long sum1=0;
	int d=2;

	for (int i=1901;i<=2000;i++)
	{
		for (int j=1;j<=12;j++)
		{
			if (leap(i)==1)
			{
				d%=7;
				if (d%7==0)
					sum++;
				d+=b[j];
			}
			else
			{
				d%=7;
				if (d%7==0)
					sum++;
				d+=a[j];
			}
		}
	}

	cout << sum;

	cin >> sum;
	return 0;
}