#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int h1, m1, h2, m2;

int main(void)
{
	while (cin >> h1 >> m1 >> h2 >> m2 && (h1!=0 || h2!=0 || m1!=0 || m2!=0))
	{
		int sum=0;
		if (h1<=h2 && m1<=m2)
			sum=(h2-h1)*60+(m2-m1);
		else if (h1<h2 && m1>m2)
			sum=(h2-h1-1)*60+(60-(m1-m2));
		else if (h1>=h2 && m1<=m2)
			sum=(24*60)-(h1-h2-1)*60-(60-(m2-m1));
		else if (h1>=h2 && m1>=m2)
			sum=(24*60)-(h1-h2)*60-(m1-m2);

		cout << sum << endl;
	}

	return 0;
}
