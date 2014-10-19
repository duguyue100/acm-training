#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int n;

int main(void)
{
	int count=1;
	while (cin >> n && n>0)
	{
		cout << "Case " << count << ": " << ceil(log2(double(n))) << endl;
		count++;
	}

	return 0;
}
