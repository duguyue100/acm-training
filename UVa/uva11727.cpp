#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	long a1=0,a2=0,a3=0;

	int n=0;
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		cin >> a1 >> a2 >> a3;

		long max=a1;
		long min=a1;
		if (a2>max) max=a2;
		if (a2<min) min=a2;
		if (a3>max) max=a3;
		if (a3<min) min=a3;
		
		if (a1!=max && a1!=min) cout << "Case " << i << ": " << a1 << endl;
		if (a2!=max && a2!=min) cout << "Case " << i << ": " << a2 << endl;
		if (a3!=max && a3!=min) cout << "Case " << i << ": " << a3 << endl;
	}

	return 0;
}