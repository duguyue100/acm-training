#include<iostream>

using namespace std;

int main(void)
{
	int N=0, K=0;
	cin >> N >> K;
	
	int n=1;
	int k=0;
	
	while (N!=n)
	{
		if (N>=K)
		{
			if (n<=K)
			{
				n*=2;
				k++;
			}
			else if (n>K)
			{
				k+=(N-n)/K;
				if ((N-n)%K!=0)
					k++;
				n=N;
			}
		}
		else if (N<K)
		{
			if (n<=N && n<=K)
			{
				n*=2;
				k++;
			}
			else n=N;
		}
	}

	cout << k;

	return 0;
}