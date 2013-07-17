#include<iostream>

using namespace std;

int main(void)
{
	double n, m, r;
	cin >> n >> m >> r;
	r=(100-r)/100;
	int i=0;
	while (n>m)
	{
		n*=r;
		i++;
	}

	cout << i;

	return 0;
}