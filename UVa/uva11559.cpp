#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int N, B, H, W;

int main(void)
{

	while (cin >> N >> B >> H >> W)
	{
		int min=B+10;

		for (int i=1;i<=H;i++)
		{
			int p=0;
			cin >> p;

			int t=0;
			for (int j=1;j<=W;j++)
			{
				cin >> t;
				if (t>=N && N*p<=B)
				{
					if (N*p<min)
						min = N*p;
				}
			}
		}

		if (min>B)
			cout << "stay home" << endl;
		else cout << min << endl;

	}

	return 0;
}
