#include<iostream>

using namespace std;

int main(void)
{
	int a[1001]={0};
	int n=0;
	cin >> n;
	int prev=-1, k=0;
	for (int i=1;i<=n;i++)
		cin >> a[i];
	for (int i=1;i<=n;i++)
	{
		if (prev==-1)
		{
			prev=a[i];
			k=1;
		}
		else if (a[i]!=prev && prev!=-1)
		{
			cout << k << " " << prev << " ";
			prev=a[i];
			k=1;
		}
		else if (a[i]==prev)
			k++;
	}
	cout << k << " " << a[n];
	cin >> n;
	return 0;
}