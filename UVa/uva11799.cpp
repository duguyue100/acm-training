#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int T=0;
	cin >> T;

	for (int i=1;i<=T;i++)
	{
		int n=0;
		cin >> n;
		int max=-1;
		for (int j=1;j<=n;j++)
		{
			int t=0;
			cin >> t;
			if (t>max) max=t;
		}

		cout << "Case " << i << ": " << max << endl;
	}


	return 0;
}