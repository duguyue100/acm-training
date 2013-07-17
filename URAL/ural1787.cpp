#include<iostream>

using namespace std;

int main(void)
{
	int k=0,n=0;
	cin >> k >> n;
	int sum=0;
	for (int i=1;i<=n;i++)
	{
		int t=0;
		cin >> t;
		sum+=t;
		sum-=k;
		t-=k;
		if (sum<=0) sum=0;
	}

	cout << sum;

	return 0;
}