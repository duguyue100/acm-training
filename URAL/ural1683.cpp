#include<iostream>

using namespace std;

int main(void)
{
	long n=0;
	cin >> n;

	if (n==1)
	{
		cout << 0;
		return 0;
	}

	long a[100000]={0};
	int k=1;
	while (n!=1)
	{
		if (n%2==0)
		{
			n/=2;
			a[k]=n;
		}
		else
		{
			n/=2;
			n++;
			a[k]=n;
		}
		k++;
	}

	cout << k-1 << endl;
	for (int i=1;i<k;i++)
		cout << " " << a[i];

	return 0;
}