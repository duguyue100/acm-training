#include<iostream>

using namespace std;

int a[10001]={0};

int main(void)
{
	int N=0;
	cin >> N;
	for (int i=1;i<=N;i++)
	{
		int t=0;
		cin >> t;
		a[i]=t+a[i-1];
	}

	int M=0;
	cin >> M;
	for (int i=1;i<=M;i++)
	{
		int l=0, r=0;
		cin >> l >> r;
		
		cout << a[r]-a[l-1] << endl;
	}

	return 0;
}