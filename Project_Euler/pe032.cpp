#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

bool a[10]={0};
vector<int> b;

bool denumber(int n)
{
	while (n!=0)
	{
		if (a[n%10]==false)
			a[n%10]=true;
		else return false;
		n/=10;
	}

	return true;
}

bool analysis(int i, int j, int t)
{
	if (denumber(i) && denumber(j) && denumber(t))
		return true;
	else return false;
}

bool check()
{
	if (a[0]==true) return false;
	for (int i=1;i<10;i++)
	{
		if (a[i]==false) return false;
	}

	return true;
}

int main(void)
{
	for (int i=1;i<=9999;i++)
		for (int j=1;j<=99;j++)
		{
			int temp=i*j;

			for (int k=0;k<=9;k++) a[k]=false;

			if (analysis(i,j,temp))
			{
				if (check())
				{
					b.push_back(temp);
					cout << i << "*" << j << "=" << temp << endl;
				}
			}
		}

	sort(b.begin(), b.end());

	std::vector<int>::iterator it;
	it=unique(b.begin(), b.end());

	b.resize( std::distance(b.begin(),it) );

	int sum=0;
	for (int i=0;i<b.size();i++)
		sum+=b[i];

	cout << sum << endl;

	return 0;
}
