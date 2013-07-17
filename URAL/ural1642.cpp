#include<iostream>

using namespace std;

int main(void)
{
	int n=0, x=0;
	cin >> n >> x;
	int l=-1000, r=1000;
	for (int i=1;i<=n;i++)
	{
		int t;
		cin >> t;
		if (t>0) r=min(r,t);
		else l=max(l,t);
	}

	if ((x>l) && (x<r))
	{
		if (x>0)
			cout << x << " " << (0-l)*2+x;
		else cout << r*2-x << " " << 0-x;
	}
	else cout << "Impossible";

	return 0;
}