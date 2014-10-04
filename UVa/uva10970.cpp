#include<iostream>
#include<cstdio>

using namespace std;

int m=0, n=0;

int main(void)
{

	while (cin >> m >> n)
	{
		cout << (m-1)+m*(n-1) << endl;
	}

	return 0;
}
