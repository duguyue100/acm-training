#include<iostream>

using namespace std;

int main(void)
{
	int n=0, m=0;

	cin >> n >> m;

	int sum=0;
	for (int i=1;i<=10;i++)
	{
		int t;
		cin >> t;
		sum+=t;
	}

	if (n<=m-sum*20) cout << "No chance.";
	else if (n>m-sum*20) cout << "Dirty debug :(";
	
	return 0;
}