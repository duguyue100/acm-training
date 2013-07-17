#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	double n=0;
	int m=0,t=0;
	cin >> n >> m;
	double sum=0;
	n*=3;
	for (int i=1;i<=m;i++)
	{
		cin >> t;
		sum+=t;
		if (sum>n)
		{
			cout << "Free after " << i << " times.";
			return 0;
		}
	}

	cout << "Team.GOV!";

	return 0;
}

// well.. over, not equal.