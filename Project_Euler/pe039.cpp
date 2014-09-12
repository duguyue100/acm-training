#include<iostream>
#include<cstdio>

using namespace std;

int a[1001]={0};

bool check(int a, int b, int c)
{
	if (a*a+b*b==c*c)
		return true;
	else return false;
}

int main(void)
{
	int max=-1;
	for (int i=1;i<=1000;i++)
		for (int j=1;j<=1000;j++)
			for (int k=1;k<=1000;k++)
			{
				if (i+j+k<=1000)
				{
					if (check(i,j,k))
					{
						a[i+j+k]++;
					}
				}
			}

	int idx=-1;
	for (int i=1;i<=1000;i++)
		if (max<a[i])
		{
			max=a[i];
			idx=i;
		}


	cout << idx << endl;

	return 0;
}
