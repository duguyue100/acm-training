#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	int t=0;
	cin >> t;

	for (int k=1;k<=t;k++)
	{
		int n=0;
		cin >> n;

		int a[15]={0};
		for (int i=0;i<n;i++) cin >> a[i];

		cout << "Case " << k << ": " << a[n/2] << endl;
	}

	return 0;
}
