#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int N=0;
int a[27]={0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
int b[27]={0};


int main(void)
{

	while (cin >> N && N)
	{
		int R=1;
		fill_n(b,27,0);
		for (int i=2;i<=N;i++)
		{
			R*=i;
			for (int j=1;j<=25;j++)
				if (R>=a[j])
				{
					while (R%a[j]==0)
					{
						b[j]++;
						R/=a[j];
					}
				}
		}

		printf("%3d! =",N);
		for (int i=1;i<=27;i++)
		{
			if (b[i]>0)
			{
				if (i%16!=0)
				{
					printf("%3d",b[i]);
				}
				else
				{
					printf("\n%6c",' ');
					printf("%3d",b[i]);
				}
			}
			else break;
		}
		printf("\n");
	}


	return 0;
}
