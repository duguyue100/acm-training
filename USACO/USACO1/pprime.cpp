/*
ID: duguyue1
TASK: pprime
LANG: C++
*/

#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

bool isprime(long n)
{
	for (int i=2; i<=(int)sqrt((double(n))); i++)
	{
		if (n%i==0)
			return false;
	}

	return true;
}

int main(void)
{
	freopen("pprime.in", "r", stdin);
	freopen("pprime.out", "w", stdout);

	long a=0, b=0;
	cin >> a >> b;

	// one digit

	for (int i=5; i<=9; i+=2)
	{
		if (i>=a && i<=b && isprime(i))
			cout << i << endl;
		else if (i>b)
			return 0;
	}

	// 2 digit

	if (a<11 && b>11) cout << 11 << endl;

	// 3 digits

	for (int d1=1;d1<=9;d1+=2)
		for (int d2=0;d2<=9;d2++)
		{
			long num=d1*100+d2*10+d1;
			if (num>=a && num<=b && isprime(num))
				cout << num << endl;
			else if (num>b) return 0;
		}

	// 4 digits

	for (int d1=1;d1<=9;d1+=2)
		for (int d2=0;d2<=9;d2++)
		{
			long num=d1*1000+d2*100+d2*10+d1;
			if (num>=a && num<=b && isprime(num))
				cout << num << endl;
			else if (num>b) return 0;
		}

	// 5 digits

	for (int d1=1;d1<=9;d1+=2)
		for (int d2=0;d2<=9;d2++)
			for (int d3=0;d3<=9;d3++)
			{
				long num=d1*10000+d2*1000+d3*100+d2*10+d1;
				if (num>=a && num<=b && isprime(num))
					cout << num << endl;
				else if (num>b) return 0;
			}


	// 6 digits

	for (int d1=1;d1<=9;d1+=2)
		for (int d2=0;d2<=9;d2++)
			for (int d3=0;d3<=9;d3++)
			{
				long num=d1*100000+d2*10000+d3*1000+d3*100+d2*10+d1;
				if (num>=a && num<=b && isprime(num))
					cout << num << endl;
				else if (num>b) return 0;
			}


	// 7 digits

	for (int d1=1;d1<=9;d1+=2)
		for (int d2=0;d2<=9;d2++)
			for (int d3=0;d3<=9;d3++)
				for (int d4=0;d4<=9;d4++)
				{
					long num=d1*1000000+d2*100000+d3*10000+d4*1000+d3*100+d2*10+d1;
					if (num>=a && num<=b && isprime(num))
						cout << num << endl;
					else if (num>b) return 0;
				}


	// 8 digits

	for (int d1=1;d1<=9;d1+=2)
		for (int d2=0;d2<=9;d2++)
			for (int d3=0;d3<=9;d3++)
				for (int d4=0;d4<=9;d4++)
				{
					long num=d1*10000000+d2*1000000+d3*100000+d4*10000+d4*1000+d3*100+d2*10+d1;
					if (num>=a && num<=b && isprime(num))
						cout << num << endl;
					else if (num>b) return 0;
				}

	return 0;
}



