#include<iostream>

using namespace std;

int main(void)
{
	int n, p1, p2, p3;
	cin >> n >> p1 >> p2 >> p3;

	int max=p1+p2+p3;
	int index=2;

	for (int i=4;i<=n;i++)
	{
		int t;
		cin >> t;
		p1=p2;
		p2=p3;
		p3=t;
		if (max<(p1+p2+p3))
		{
			max=p1+p2+p3;
			index=i-1;
		}
	}

	cout << max << " " << index;
	cin >> n;
	return 0;
}