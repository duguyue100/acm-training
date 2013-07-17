#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n=0;
	double t=0, s=0, k=0, y;
	scanf("%d%lf%lf",&n,&t,&s);

	for (int i=1;i<=n;i++)
	{
		scanf("%lf",&k);
		y=(t+k+s)/2;
		printf("%.6lf\n",y);
	}

	return 0;
}

// use Visual C++ compiler