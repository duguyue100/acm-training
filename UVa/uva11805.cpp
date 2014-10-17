#include<iostream>
#include<cstdio>

using namespace std;

int T;

int main(void)
{
	cin >> T;

	for (int counter=1;counter<=T;counter++)
	{
		int n=0, k=0, p=0;
		cin >> n >> k >> p;

		int r=p%n;

		if (r==0)
		{
			cout << "Case " << counter << ": " << k << endl;
		}
		else
		{
			r+=k;
			if (r>n)
				cout << "Case " << counter << ": " << r%n << endl;
			else cout << "Case " << counter << ": " << r << endl;
		}

	}

	return 0;
}
