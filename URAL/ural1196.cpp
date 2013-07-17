#include<iostream>

using namespace std;

int a[15001]={0};
int n,m;

int search(int key)
{
	int min=1, max=n;
	while (max>=min)
	{
		int mid=(min+max)/2;
		if (a[mid]<key)
			min=mid+1;
		else if (a[mid]>key)
			max=mid-1;
		else return key;
	}
	
	return 0;
}

int main(void)
{
	cin >> n;
	
	for (int i=1;i<=n;i++)
		cin >> a[i];

	int sum=0; cin >> m;
	for (int i=1;i<=m;i++)
	{
		int t=0;
		cin >> t;
		if (search(t)) sum++;
	}

	cout << sum;

	return 0;
}