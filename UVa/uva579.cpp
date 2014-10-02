#include<iostream>
#include<cstdio>

using namespace std;

double H=0, M=0;
char c;

int main(void)
{
	while (cin >> H >> c >> M && (H!=0 || M!=0))
	{
		double h=H*30;
		double m=M*6;

		h+=(M*0.5);
		if (h>=360) h-=360;

		double r=0;
		if (m>h) r=m-h;
		else if (h>m) r=h-m;

		if (r>180) r=360-r;

		printf("%.3f\n", r);
	}

	return 0;
}
