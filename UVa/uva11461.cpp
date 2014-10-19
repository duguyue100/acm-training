#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>

using namespace std;

int a[100001];

void init()
{
	int count=0;

	for (int i=1;i<=100000;i++)
	{
		if ((int)sqrt((double)i)*(int)sqrt((double)i)==i)
		{
			count++;
			a[i]=count;
		}
		else a[i]=count;
	}
}

int main(void)
{

	init();

	int l,r;

	while (cin >> l >> r && (l!=0 || r!=0))
	{
		int t=a[r]-a[l];
		if ((int)sqrt((double)l)*(int)sqrt((double)l)==l)
			t++;

		cout << t << endl;
	}

	return 0;
}
