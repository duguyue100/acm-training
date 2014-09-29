#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

const int BOUND=3;

int m=0, n=0;

int gcd(int a, int b)
{
	if (b==0) return a;
	else return gcd(b, a%b);
}

int main(void)
{
	bool check=false;
	while (scanf("%d %d", &m, &n)!=EOF)
	{
		int t=gcd(m,n);
		m/=t; n/=t;

		if (check==true) cout << endl;
		else check=true;

		double diff=100000.0;
		int mt=0, nt=0;
		for (int i=1;i<n;i++)
		{
			double v=(double)m/(double)n;
			int d=(int)(v*i);
			nt=i;

			bool flag=false;
			for (int j=d-BOUND; j<=d+BOUND; j++)
			{
				if (abs(((double)j/(double)i)-v)<diff && j>0)
				{
					diff=abs(((double)j/(double)i)-v);
					mt=j;
					flag=true;
				}
			}

			if (flag==true)
				cout << mt << "/" << nt << endl;

		}
		cout << m << "/" << n << endl;
	}

	return 0;
}

