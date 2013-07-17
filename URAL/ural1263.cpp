#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	double a[10001]={0};
	
	int N=0, M=0;
	cin >> N >> M;

	for (int i=1;i<=M;i++)
	{
		int t=0;
		cin >> t;
		a[t]++;
	}

	for (int i=1;i<=N;i++)
		printf("%.2f%%\n",(a[i]/M)*100);

	return 0;
}