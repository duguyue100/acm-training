#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int N=0;

bool a[4000]={0};

bool check(int n)
{
	for (int i=1;i<n;i++)
		if (!a[i]) return false;

	return true;
}

int main(void)
{
	while (cin >> N)
	{
		fill_n(a,4000,false);
		int t=0, d=0; cin >> t;
		for (int i=1;i<N;i++)
		{
			cin >> d;

			a[abs(t-d)]=true;
			t=d;
		}

		if (check(N)) cout << "Jolly" << endl;
		else cout << "Not jolly" << endl;
	}

	return 0;
}
