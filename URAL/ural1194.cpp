#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	int N=0, K=0;
	cin >> N >> K;
	
	int sum=0;
	for (int i=1;i<=K;i++)
	{
		N-=2;
		sum+=(N*2);
	}

	sum+=(N*(N-1))/2;

	cout << sum;

	return 0;
}