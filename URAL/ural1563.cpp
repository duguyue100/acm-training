#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

string a[1000];

bool found(string st,int n)
{
	for (int i=0;i<=n;i++)
		if (a[i]==st)
			return true;
	return false;
}

int main(void)
{
	int n=0;
	scanf("%d\n",&n);

	int sum=0, k=0;
	for (int i=1;i<=n;i++)
	{
		string st="";
		getline(cin,st);
		if (found(st,k))
			sum++;
		else {
			a[k]=st;
			k++;
		}
	}

	cout << sum;

	return 0;
}