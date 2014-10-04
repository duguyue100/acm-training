// very worth noted question
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(void)
{
	long n=0;
	while (cin >> n && n)
	{
		long r=(int)sqrt(n);
		if (r*r==n) cout << "yes" << endl;
		else cout << "no" << endl;
	}

	return 0;
}
