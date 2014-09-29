#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> a;

int main(void)
{
	int t=0;
	while (cin >> t)
	{
		a.push_back(t);

		if (a.size()==1)
			cout << a[0] << endl;
		else
		{
			sort(a.begin(), a.end());

			if (a.size()%2==1)
				cout << a[a.size()/2] << endl;
			else cout << (int)((a[a.size()/2-1]+a[a.size()/2])/2.0) << endl;
		}
	}

	return 0;
}
