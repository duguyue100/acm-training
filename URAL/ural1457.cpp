#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	int n=0;
	cin >> n;
	double sum=0;
	for (int i=1;i<=n;i++)
	{
		double t=0;
		cin >> t;
		sum+=t/n;
	}
	
	printf("%.6f",sum);
	
	return 0;
}