#include<iostream>
#include<cstdio>

using namespace std;

int a[4001][2]={0};

int search(int t, int min, int max)
{
	while (max>=min)
	{
		int mid=min+((max-min)/2);
		if (a[mid][0]<t)
			min=mid+1;
		else if (a[mid][0]>t)
			max=mid-1;
		else return mid;
	}

	return 0;
}

int main(void)
{
	
	int N=0;
	cin >> N;
	for (int i=1;i<=N;i++)
		cin >> a[i][0];

	int n=0;
	for (int i=1;i<=2;i++)
	{
		cin >> n;
		for (int j=1;j<=n;j++)
		{
			int t=0;
			cin >> t;
			int k;
			k=search(t,1,N);
			if (k) a[k][1]++;
		}
	}
	int c=0;
	for (int i=1;i<=4000;i++)
		if (a[i][1]==2) c++;
	cout << c;
	return 0;
}