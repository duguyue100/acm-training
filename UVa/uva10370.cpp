#include<iostream>
#include<cstdio>

using namespace std;

int T=0;
int n=0, k=0;

int main(void)
{
	cin >> T;
	for (int counter=1;counter<=T;counter++)
	{
		cin >> n;
		double a[1100]={0};

		double avg=0;
		for (int i=1;i<=n;i++)
		{
			cin >> a[i];
			avg+=a[i];
		}
		avg/=(double)n;

		int count=0;
		for (int i=1;i<=n;i++)
		{
			if (a[i]>avg) count++;
		}

		printf("%.3f%%\n", (double)count/(double)n*100);
	}

	return 0;
}
