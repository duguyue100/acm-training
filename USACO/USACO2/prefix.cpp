/*
ID: duguyue1
TASK: prefix
LANG: C++
*/

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

string p[250];
string st="";
int s[200050];
int best;

int main(void)
{
	freopen("prefix.in", "r", stdin);
	freopen("prefix.out", "w", stdout);

	int counter=0;
	while (true)
	{
		cin >> p[counter];
		if (p[counter]!=".") counter++;
		else break;
	}

	string str="";

	while (cin >> str)
	{
		st+=str;
	}

	s[0]=1;
	best=0;
	for (size_t i=0; i<st.length();i++)
		if (s[i])
		{
			best=i;

			for (int j=0; j<counter; j++)
			{
				size_t k=0;
				for (k=0; i+k<st.length() && p[j][k] && p[j][k]==st[i+k]; k++);

				if (k==p[j].length()) s[i+k]=1;
			}
		}

	if (s[st.length()]) best=st.length();

	cout << best << endl;

	return 0;
}
