#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	for (int i=1;i<=9;i++)
		for (int j=1;j<=9;j++)
			for (int k=0;k<=9;k++)
			{
				if ((double)(i*10+j)/(double)(j*10+k)==
					(double)i/(double)k && (double)i/(double)j<1)
				{
					cout << i << "/" << k << endl;
				}
			}

	return 0;
}
