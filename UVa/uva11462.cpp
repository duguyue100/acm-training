#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int a[2000010];
int n;


int main(void)
{
	while (scanf("%d", &n) && n!=0)
	{
		for (int i=0;i<n;i++) scanf("%d", &a[i]);

		sort(a, a+n);

		for (int i=0;i<n-1;i++) printf("%d ", a[i]);
		printf("%d\n", a[n-1]);
	}

	return 0;
}
