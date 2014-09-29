#include<iostream>
#include<cstdio>

using namespace std;

int n=0;
int a[1000002][2]={0};

bool prime(int n)
{
	if (n<2) return false;
	if (n<=3) return true;
	if (!(n%2) || !(n%3)) return false;
	for (int i=5;i*i<=n;i+=6)
		if (!(n%i) || !(n%(i+2))) return false;
	return true;
}

int digit(int n)
{
	int sum=0;
	while (n!=0)
	{
		sum+=n%10;
		n/=10;
	}

	return sum;
}

int main(void)
{
	scanf("%d", &n);

	int count=1;
	a[2][0]=1;
	a[2][1]=0;
	for (int i=3;i<=1000000;i+=2)
	{
		if (prime(i) && prime(digit(i)))
		{
			a[i][0]=1;
			a[i][1]=count;
			count++;
		}
	}

	for (int i=1;i<=n;i++)
	{
		int t1=0, t2=0;
		scanf("%d%d", &t1, &t2);

		if (t1==t2)
		{
			if (a[t1][0]==1)
				cout << 1 << endl;
			else cout << 0 << endl;
		}
		else{
			int start=t1;
			bool flag1=false, flag2=false;
			for (int j=t1;j<=t2;j++)
				if (a[j][0]==1)
				{
					start=j;
					flag1=true;
					break;
				}
			int end=t2;
			for (int j=t2;j>=t1;j--)
				if (a[j][0]==1)
				{
					end=j;
					flag2=true;
					break;
				}

			if (flag1==false || flag2==false)
			{
				printf("%d\n", 0);
			}
			else printf("%d\n", a[end][1]-a[start][1]+1);
		}
	}
	return 0;
}