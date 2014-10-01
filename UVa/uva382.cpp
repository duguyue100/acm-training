#include<iostream>
#include<cstdio>

using namespace std;

int N=0;

int sum_factor(int n)
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
	cout << "PERFECTION OUTPUT" << endl;

	while (cin >> N && N)
	{
		int sum=sum_factor(N);
		printf("%5d  ",N);
		if (sum==N)
		{
			printf("PERFECT\n");
		}
		else if (sum<N)
		{
			printf("DEFICIENT\n");
		}
		else if (sum>N)
		{
			printf("ABUNDANT\n");
		}
	}

	cout << "END OF OUTPUT" << endl;

	return 0;
}
