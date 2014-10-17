#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	long a,b,c;

	while (cin >> a >> b >> c && (a ||  b || c))
	{
		long min=a;
		if (b<min) min=b; if (c<min) min=c;

		long max=a;
		if (b>max) max=b; if (c>max) max=c;

		long mid=a;
		if (b!=min && b!=max) mid=b;
		if (c!=min && c!=max) mid=c;

		if (min*min+mid*mid==max*max)
			cout << "right" << endl;
		else cout << "wrong" << endl;
	}

	return 0;
}
