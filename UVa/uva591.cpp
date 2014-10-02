#include<iostream>
#include<cstdio>

using namespace std;

int n=0;
int a[51]={0};

int main(void)
{
	int counter=1;
	while (cin >> n && n)
	{
		int sum=0;
		for (int i=1;i<=n;i++)
		{
			cin >> a[i];
			sum+=a[i];
		}

		sum/=n;

		int move=0;
		for (int i=1;i<=n;i++)
		{
			if (a[i]<sum)
				move+=sum-a[i];
		}

		cout << "Set #" << counter << endl;
		cout << "The minimum number of moves is " << move << "." << endl;
		cout << endl;

		counter++;
	}

	return 0;
}
