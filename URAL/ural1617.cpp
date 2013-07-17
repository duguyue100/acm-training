#include<iostream>

using namespace std;

int main(void)
{
	int a[701]={0};
	
	int n=0;
	cin >> n;

	int max=-1, min=1000;
	for (int i=1;i<=n;i++)
	{
		int t=0;
		cin >> t;
		a[t]++;
		if (max<t) max=t;
		if (min>t) min=t;
	}

	int sum=0;
	for (int i=min;i<=max;i++)
		sum+=(a[i]/4);

	cout << sum;

	return 0;
}