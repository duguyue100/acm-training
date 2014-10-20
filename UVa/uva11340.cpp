#include<iostream>
#include<algorithm>
#include<cstdio>
#include<map>
#include<cmath>

using namespace std;

int N;

int main(void)
{
	cin >> N;

	for (int count=1; count<=N; count++)
	{
		int K=0;
		cin >> K;

		map<char, int> a;
		for (int i=1;i<=K;i++)
		{
			char ch; int n=0;
			cin >> ch >> n;
			a[ch]=n;
		}

		int M=0;
		cin >> M;
		int sum=0;
		string st="";
		getline(cin, st);
		for (int i=1;i<=M;i++)
		{
			getline(cin, st);
			for (size_t j=0; j<st.length();j++)
			{
				sum+=a[st[j]];
			}
		}

		if (sum/100==0)
		{
			cout << "0.";
			if (sum/10==0)
				cout << "0";

			cout << sum;
		}
		else
		{
			cout << sum/100 << ".";
			sum-=(sum/100)*100;
			if (sum/10==0)
				cout << "0";

			cout << sum;
		}

		cout << "$" << endl;
	}


	return 0;
}
