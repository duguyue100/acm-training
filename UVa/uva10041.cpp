#include<iostream>
#include<cstdio>
#include<cmath>
#include<climits>
#include<algorithm>

using namespace std;

int N=0;

int main(void)
{
	cin >> N;

	for (int counter=1;counter<=N;counter++)
	{
		int m=0;
		int a[600]={0};
		cin >> m;

		for (int i=0;i<m;i++) cin >> a[i];
		sort(a,a+m);

		int min=INT_MAX;
		for (int i=0;i<m;i++)
		{
			int sum=0;
			for (int j=0;j<m;j++)
			{
				sum+=(int)(abs(a[i]-a[j]));
			}

			if (sum<min) min=sum;
		}

		cout << min << endl;
	}

	return 0;
}
