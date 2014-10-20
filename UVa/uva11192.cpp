#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>

using namespace std;

long N;
string str;

int main(void)
{

	while (cin >> N && N!=0)
	{
		cin >> str;

		int t=str.length()/N;

		string st="";

		for (int i=0;i<N;i++)
		{
			string temp=str.substr(i*t, t);
			reverse(temp.begin(), temp.end());
			st+=temp;
		}

		cout << st << endl;
	}

	return 0;
}
