#include<iostream>
#include<cstdio>

using namespace std;

int N=0, K=0;

int main(void)
{
	cin >> N >> K;

	int U=0, S=0;
	for (int i=1;i<=N;i++)
	{
		int t=0;
		cin >> t;

		if (t>=K)
		{
			U+=t-K;
		}
		else
		{
			S+=K-t;
		}
	}

	cout << U << " " << S << endl;

	return 0;
}



