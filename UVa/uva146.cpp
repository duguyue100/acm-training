#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

string st="";

int main(void)
{
	cin >> st;

	while (st!="#")
	{
		int a[51]={0};

		for (size_t i=0;i<st.length();i++)
			a[i]=st[i]-'a';

		if (std::next_permutation(a, a+st.length()))
		{
			for (size_t i=0;i<st.length();i++)
				cout << (char)(a[i]+'a');
			cout << endl;
		}
		else
		{
			cout << "No Successor" << endl;
		}


		cin >> st;
	}

	return 0;
}



