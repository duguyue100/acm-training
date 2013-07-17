#include<iostream>

using namespace std;

int main(void)
{
	long long a[20]={0};
	int n=0, k=0;
	cin >> n >> k;
	a[0]=1;
	a[1]=k-1;
	for (int i=2;i<=n;i++)
		a[i]=(k-1)*(a[i-1]+a[i-2]);

	cout << a[n];
	return 0;
}