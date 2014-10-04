// xor usage
#include<iostream>
#include<cstdio>

using namespace std;

int n=0, m=0;

int main(void)
{
	while (cin >> n >> m)
	{
		cout << (int)(n xor m) << endl;
	}
	return 0;
}
