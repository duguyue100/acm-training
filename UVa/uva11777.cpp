#include<iostream>
#include<cstdio>

using namespace std;

int T;

int main(void)
{
	cin >> T;

	for (int counter=1;counter<=T;counter++)
	{
		int g=0, n=0, m=0, k=0;
		cin >> n; g+=n;
		cin >> n; g+=n;
		cin >> n; g+=n;
		cin >> n; g+=n;

		cin >> n >> m >> k;
		int min=n;
		if (m<min) min=m; if (k<min) min=k;

		g+=(n+m+k-min)/2;

		if (g>=90)
			printf("Case %d: A\n", counter);
		else if (g<90 && g>=80)
			printf("Case %d: B\n", counter);
		else if (g<80 && g>=70)
			printf("Case %d: C\n", counter);
		else if (g<70 && g>=60)
			printf("Case %d: D\n", counter);
		else if (g<60)
			printf("Case %d: F\n", counter);
	}

	return 0;
}
