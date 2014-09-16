#include<iostream>

using namespace std;

int f[1000]={0};
int n=0, m=0;

int main(void)
{
	cin >> n >> m;

	for (int i=1;i<=n;i++)
	{
		int price=0, value=0;
		cin >> price >> value;

		for (int j=m;j>=price;j--)
			if (f[j-price]+value>f[j])
				f[j]=f[j-price]+value;
	}

	cout << f[m] << endl;

	return 0;
}
