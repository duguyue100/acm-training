#include<iostream>
#include<cstdio>

using namespace std;

int N;

int main(void)
{
	cin >> N;

	for (int i=1;i<=N;i++)
	{
		int m=0, t=0;
		cin >> m;
		cin >> t;
		m+=t;
		cin >> t;

		int sum=0;
		while (m/t!=0)
		{
			sum+=m/t;
			m=(m%t)+(m/t);
		}

		cout << sum << endl;
	}
	return 0;
}
