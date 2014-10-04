// bubble sort
#include<iostream>
#include<cstdio>

using namespace std;

int n=0;

int main(void)
{
	while (cin >> n)
	{
		int a[1100]={0};

		for (int i=1;i<=n;i++) cin >> a[i];

		int flip=0;
		for (int i=1;i<=n;i++)
			for (int j=n;j>=i+1;j--)
				if (a[j-1]>a[j])
				{
					int t=a[j-1];
					a[j-1]=a[j];
					a[j]=t;
					flip++;
				}

		cout << "Minimum exchange operations : " << flip << endl;
	}

	return 0;
}
