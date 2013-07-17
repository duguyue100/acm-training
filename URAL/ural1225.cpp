#include<iostream>

using namespace std;

int main(void)
{
	unsigned long long f[100]={0};
	int n=0;
	cin >> n;
	f[1]=1;
	f[2]=1;
	for (int i=3;i<=n;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}

	cout << 2*f[n];

	return 0;
}