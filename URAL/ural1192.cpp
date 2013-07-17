#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main(void)
{
	const double pi=3.1415926535;
	double v=0, a=0, k=0;
	cin >> v >> a >> k;

	printf("%.2lf",(v*v/10)*sin(2*a/180*pi)*(k/(k-1)));

	return 0;
}