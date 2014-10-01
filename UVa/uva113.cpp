#include<iostream>
#include<cmath>
#include<cmath>

using namespace std;

int main(void)
{

	long double n=0, p=0;

	while (cin >> n >> p)
	{
		cout << (int)round(powl(p, 1.0/n)) << endl;
	}

	return 0;
}
