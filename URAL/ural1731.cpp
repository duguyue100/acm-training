#include<iostream>

using namespace std;

int main(void)
{
	int n=0, m=0;
	cin >> n >> m;

	int i=1;
	for (i=1;i<=n;i++) cout << i << " ";
	cout << endl;

	for (int j=1;j<=m;j++)
	{
		cout << i*100 << " ";
		i++;
	}

	return 0;
}