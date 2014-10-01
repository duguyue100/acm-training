#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int N=0;
int a[51]={0};

int main(void)
{
	cin >> N;

	for (int counter=1;counter<=N;counter++)
	{
		int m=0;
		cin >> m;
		for (int i=1;i<=m;i++) cin >> a[i];

		int ans=0;
		for (int i=1;i<m;i++)
			for (int j=1;j<m;j++)
				if (a[j]>a[j+1])
				{
					swap(a[j],a[j+1]);
					ans++;
				}

		cout << "Optimal train swapping takes " << ans << " swaps." << endl;
	}

	return 0;
}
