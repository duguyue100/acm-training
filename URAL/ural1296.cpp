#include<iostream>

using namespace std;

int a[60001]={0};



int main(void)
{
	int n=0;
	cin >> n;
	for (int i=1;i<=n;i++)
		cin >> a[i];
	
	long long b=0, sum=-10000000000;
	for (int i=1;i<=n;i++)
	{
		if (b>0) b+=a[i];
		else b=a[i];
		if (b>sum) sum=b;
	}

	if (sum<0) cout << 0;
	else cout << sum;

	return 0;
}