// seems for this question, scanf and printf is more reliable
#include<iostream>
#include<cstdio>

using namespace std;

int T=0;

int main(void)
{
	cin >> T;
	for (int counter=1;counter<=T;counter++)
	{
		int N=0, P=0;
		scanf("%d %d", &N, &P);
		int a[101]={0};

		for (int i=1;i<=P;i++) scanf("%d", &a[i]);

		int count=0;
		for (int i=1;i<=N;i++)
		{
			for (int j=1;j<=P;j++)
			{
				if (i%a[j]==0 && !((i%7==6)||(i%7==0)))
				{
					count++;
					break;
				}
			}
		}

		printf("%d\n", count);
	}

	return 0;
}
