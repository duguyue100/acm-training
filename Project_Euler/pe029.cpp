#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

vector<double> a;

int main(void)
{
	for (int i=2;i<=100;i++)
		for (int j=2;j<=100;j++)
			a.push_back(pow((double)i, (double)j));

	sort(a.begin(), a.end());

	std::vector<double>::iterator it;
	it=unique(a.begin(), a.end());

	a.resize( std::distance(a.begin(),it) );

	cout << a.size() << endl;

	return 0;
}



