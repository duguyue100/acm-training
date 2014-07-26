/*
ID: duguyue1
TASK: sprime
LANG: C++
*/

// Using DFS is better
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int a[5]={1,2,3,5,7};
int c[4]={1,3,7,9};
long b[10000]={0};

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
	freopen("sprime.in", "r", stdin);
	freopen("sprime.out", "w", stdout);

	int n;
	cin >> n;

	long d=1;
	for (int i=1;i<=8-n;i++) d*=10;

	int counter=1;
	for (int d1=1;d1<5;d1++)
		for (int d2=0;d2<4;d2++)
			for (int d3=0;d3<4;d3++)
				for (int d4=0;d4<4;d4++)
					for (int d5=0;d5<4;d5++)
						for (int d6=0;d6<4;d6++)
							for (int d7=0;d7<4;d7++)
								for (int d8=0;d8<4;d8++)
								{
									long num=a[d1]*10000000+c[d2]*1000000+c[d3]*100000+c[d4]*10000+c[d5]*1000+c[d6]*100+c[d7]*10+c[d8];

									num/=d;

									bool flag=true;
									long temp=num;
									while (temp!=0)
									{
										if (!isprime(temp))
										{
											flag=false;
											break;
										}


										temp/=10;
									}
									if (num!=b[counter-1] && flag==true)
									{
										b[counter]=num;
										counter++;
									}
								}

	for (int i=1;i<counter;i++)
		cout << b[i] << endl;

	return 0;
}




