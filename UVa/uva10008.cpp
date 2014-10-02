#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

typedef pair<char, int> PAIR;

map<char, int> a;

int N=0;
char ch;

bool cmp_by_value(const PAIR& lhs, const PAIR& rhs) {
  return lhs.second > rhs.second;
}

bool cmp_by_char(const PAIR& lhs, const PAIR& rhs) {
  return lhs.first < rhs.first;
}

int main(void)
{
	cin >> N;

	for (int i=0;i<26;i++)
		a[(char)(i+'A')]=0;

	string str="";
	getline(cin, str);
	for (int i=1;i<=N;i++)
	{
		getline(cin, str);
		for (size_t j=0;j<str.length();j++)
		{
			ch=str[j];
			if (ch>='a' && ch<='z')
			{
				//cout << ch << endl;
				ch=ch-'a'+'A';
				a[ch]++;
			}
			else if (ch>='A' && ch <='Z')
			{
				//cout << ch << endl;
				a[ch]++;
			}
		}
	}


	vector<PAIR> b(a.begin(), a.end());

	sort(b.begin(), b.end(), cmp_by_value);

	for (size_t i=0;i<b.size();i++)
	{
		size_t s=i, e=i, k=i;
		for (size_t j=s;j<b.size();j++)
		{
			if (b[i].second!=b[j].second)
			{
				e=j;
				break;
			}
			else k=j;
		}

		sort(b.begin()+s, b.begin()+e, cmp_by_char);
		i=k;
	}

	for (size_t i=0;i<b.size();i++)
	{
		if (b[i].second!=0)
			cout << b[i].first << " " << b[i].second << endl;
	}

}
