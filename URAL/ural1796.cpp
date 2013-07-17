#include<iostream>

using namespace std;

int a[7]={0};
int b[7]={0,10,50,100,500,1000,5000};

int cost(int m)
{
	int sum=0;
	for (int i=1;i<=m;i++) sum+=a[i]*b[i];
	return sum;
}

int main(void)
{
	
	for (int i=1;i<=6;i++)
		cin >> a[i];

	int n=0;
	cin >> n;

	int max=cost(6);

	int index=1;
	for (int i=6;i>=1;i--)
		if (a[i]!=0)
		{
			index=i;
			break;
		}
	int index1=1;
	for (int i=1;i<=6;i++)
		if (a[i]!=0)
		{
			index1=i;
			break;
		}

	int min=cost(index)-b[index1];

	max/=n;
	min/=n;

	cout << max-min << endl;
	for (int i=min+1;i<=max;i++)
		cout << i << " ";

	return 0;
}