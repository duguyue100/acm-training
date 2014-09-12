#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

const int N=1000000;

vector<int> num2binary(int n)
{
	vector<int> temp;

	while (n!=0)
	{
		temp.push_back(n%2);
		n/=2;
	}

	return temp;
}

vector<int> denumber(int n)
{
	vector<int> temp;

	while (n!=0)
	{
		temp.push_back(n%10);
		n/=10;
	}

	return temp;
}

bool check(vector<int> a)
{
	for (size_t i=0;i<a.size()/2;i++)
		if (a[i]!=a[a.size()-i-1])
			return false;

	return true;
}

int main(void)
{
	int sum=0;
	for (int i=1;i<=N;i++)
	{
		if (check(denumber(i)) && check(num2binary(i)))
		{
			sum+=i;
			cout << i << endl;
		}
	}

	cout << sum << endl;

	return 0;
}
